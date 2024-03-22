// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomFBXSceneImporter.h"

void UCustomFBXSceneImporter::ProcessNode(UMeshNode* CurrentNode, FbxAMatrix ParentGlobalMatrix, int TotalNodeCount, int& ProcessedNodeCount)
{
	if (RequestDestroy)
	{
		return;
	}

	if (FBXImportSettings.IsValid() && FBXImportSettings != nullptr && CurrentNode)
	{
		if (FbxNode* Node = CurrentNode->Node)
		{
			FbxAMatrix GlobalTransformMatrix, TotalMatrix, TotalMatrixForNormal;
			FBXHelper::ComputeTotalMatrix(FBXImportSettings->bTransformVertexToAbsolute, Node, ParentGlobalMatrix, GlobalTransformMatrix,
				TotalMatrix, TotalMatrixForNormal);

			if (UMeshNode_Geometry* NewMeshNode = Cast<UMeshNode_Geometry>(CurrentNode))
			{
				if (FbxMesh* Mesh = NewMeshNode->Node->GetMesh())
				{
					ProcessMesh(Mesh, TotalMatrix, TotalMatrixForNormal, NewMeshNode);
					AsyncTask(ENamedThreads::GameThread, [this, NewMeshNode]()
						{
							CustomOnMeshNodeCreated.Broadcast(FBXImportSettings->ImportID, NewMeshNode, FBXImportSettings->SpawnTransform);
						});

				}

			}

			for (UMeshNode* ChildNode : CurrentNode->GetChildren())
			{
				if (RequestDestroy)
				{
					break;
				}
				// Pass down the global transform matrix to the child nodes
				ProcessNode(ChildNode, GlobalTransformMatrix, TotalNodeCount, ProcessedNodeCount);
			}

			ProcessedNodeCount++;

			AsyncTask(ENamedThreads::GameThread, [this, ProcessedNodeCount, TotalNodeCount, Node]()
				{
					float Progress = (static_cast<float>(ProcessedNodeCount) / TotalNodeCount);
					OnNodeProcessingChanged.Broadcast(FBXImportSettings->ImportID, Node->GetName());
					OnImportProgressChanged.Broadcast(FBXImportSettings->ImportID, Progress);
				});
		}
	}
}
