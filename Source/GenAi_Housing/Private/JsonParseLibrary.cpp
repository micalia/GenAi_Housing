// Fill out your copyright notice in the Description page of Project Settings.


#include "JsonParseLibrary.h"

FString UJsonParseLibrary::JsonParse(const FString& originData)
{
	FString parsedData;

	//Reader�� �����.
	TSharedRef<TJsonReader<TCHAR>> reader = TJsonReaderFactory<TCHAR>::Create(originData);

	//reader�� �Ľ̵� ����� ���� json Object����
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
	TSharedPtr<FJsonObject> jsonObj = MakeShareable(new FJsonObject());

	for (TPair<FString, FString> kv : source)
	{
		jsonObj->SetStringField(kv.Key, kv.Value);
	}

	// Writer�� �����ϰ�, json Object�� ���ڵ��Ѵ�.
	FString jsonData;

	TSharedRef<TJsonWriter<TCHAR>> writer = TJsonWriterFactory<TCHAR>::Create(&jsonData);
	FJsonSerializer::Serialize(jsonObj.ToSharedRef(), writer);

	return jsonData;
}
