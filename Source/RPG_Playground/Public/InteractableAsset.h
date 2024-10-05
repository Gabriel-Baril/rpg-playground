// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Materials/MaterialInterface.h"
#include "InteractableAsset.generated.h"

UCLASS(BlueprintType)
class RPG_PLAYGROUND_API UInteractableAsset : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rendering")
	TSoftObjectPtr<UMaterialInterface> OutlineMaterial;

public:
	FORCEINLINE TSoftObjectPtr<UMaterialInterface> GetOutlineMaterial() const { return OutlineMaterial; }
};
