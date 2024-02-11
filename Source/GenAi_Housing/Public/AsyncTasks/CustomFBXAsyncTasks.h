// Copyright 2019-2023, Athian Games. All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include "CustomFBXImportManager.h"
#include "Async/AsyncWork.h"

class ACustomFBXImportManager;

class FCustomImportFBXTask : public FNonAbandonableTask
{
	friend class FAutoDeleteAsyncTask<FCustomImportFBXTask>;

	class ACustomFBXImportManager* FBXImportManager;
	class UCustomFBXSceneImporter* FBXSceneImporter;

public:

	FCustomImportFBXTask(class ACustomFBXImportManager* InFBXImportManager,class UCustomFBXSceneImporter* InImporter);

	void DoWork();
	
	FORCEINLINE TStatId GetStatId() const
	{
		RETURN_QUICK_DECLARE_CYCLE_STAT(FCustomImportFBXTask, STATGROUP_ThreadPoolAsyncTasks);
	}

	// Implement the CanAbandon and Abandon methods
	bool CanAbandon()
	{
		return true;
	}

	void Abandon();
};
