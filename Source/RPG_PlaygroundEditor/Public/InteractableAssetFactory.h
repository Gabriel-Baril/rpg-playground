// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "InteractableAssetFactory.generated.h"

UCLASS()
class RPG_PLAYGROUNDEDITOR_API UInteractableAssetFactory : public UFactory
{
	GENERATED_BODY()
public:
	UInteractableAssetFactory();
	// Override to create a new asset instance
	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
};
