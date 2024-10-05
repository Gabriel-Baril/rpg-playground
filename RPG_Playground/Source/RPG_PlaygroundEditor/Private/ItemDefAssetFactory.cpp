// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemDefAssetFactory.h"
#include "ItemDefAsset.h"

UItemDefAssetFactory::UItemDefAssetFactory()
{
	SupportedClass = UItemDefAsset::StaticClass();
	bCreateNew = true;
	bEditAfterNew = true;
}

UObject* UItemDefAssetFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UItemDefAsset>(InParent, Class, Name, Flags);
}