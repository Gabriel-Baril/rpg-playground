// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractableAssetFactory.h"
#include "InteractableAsset.h"

UInteractableAssetFactory::UInteractableAssetFactory()
{
	SupportedClass = UInteractableAsset::StaticClass();
	bCreateNew = true;
	bEditAfterNew = true;
}

UObject* UInteractableAssetFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UInteractableAsset>(InParent, Class, Name, Flags);
}