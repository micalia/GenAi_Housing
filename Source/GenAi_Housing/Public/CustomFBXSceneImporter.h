// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FBXCore/FBXSceneImporter.h"
#include "CustomFBXSceneImporter.generated.h"

/**
 * 
 */
UCLASS()
class GENAI_HOUSING_API UCustomFBXSceneImporter : public UFBXSceneImporter
{
	GENERATED_BODY()
public:
	FOnImportProgressChanged CustomOnImportProgressChanged;
	FOnNodeProcessingChanged CustomOnNodeProcessingChanged;
	FOnMeshNodeCreated CustomOnMeshNodeCreated;

	virtual void ProcessNode(class UMeshNode* CurrentNode, FbxAMatrix ParentGlobalMatrix, int TotalNodeCount, int& ProcessedNodeCount) override;

	void CustomSetImportSettings(TSharedPtr<FFBXImportSettings> InImportSettings)
	{
		FBXImportSettings = InImportSettings;
	}
};
