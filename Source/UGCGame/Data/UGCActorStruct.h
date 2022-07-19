#pragma once
#include "UGCActorEnum.h"
#include "Engine/DataTable.h"
#include "UGCActorStruct.generated.h"

USTRUCT(BlueprintType)
struct FUGCActorStruct: public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Data",meta=(DisplayName="名称"))
	FString Name;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Data",meta=(DisplayName="介绍"))
	FString Introduce;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Data",meta=(DisplayName="类型"))
	UGCActorEnum ActorType;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Data",meta=(DisplayName="图标"))
	UTexture2D* Icon;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Data",meta=(DisplayName="模型"))
	UStaticMesh* Mesh;
	
};
