// Copyright 2019-2023, Athian Games. All Rights Reserved. 


#include "AsyncTasks/CustomFBXAsyncTasks.h"
#include "CustomFBXImportManager.h"
#include "CustomFBXSceneImporter.h"

FCustomImportFBXTask::FCustomImportFBXTask(ACustomFBXImportManager* InFBXImportManager, UCustomFBXSceneImporter* InImporter):
 FBXImportManager(InFBXImportManager),FBXSceneImporter(InImporter)
{
}

void FCustomImportFBXTask::DoWork()
{
	// Call your FBXImporter function here, which will process the FBX file
	if (FBXSceneImporter) { 
		FBXSceneImporter->ImportFBX();
	}

	AsyncTask(ENamedThreads::AnyThread, [this]()
	{
			AsyncTask(ENamedThreads::GameThread, [this]()
			{
					if (FBXImportManager)
					{
						FBXImportManager->CustomHandleImportCompleted(FBXSceneImporter);
					}

			});
	});
}

void FCustomImportFBXTask::Abandon()
{
	if (FBXSceneImporter)
	{
		FBXSceneImporter->RequestDestroy = true;
	}
}


