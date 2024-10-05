// Fill out your copyright notice in the Description page of Project Settings.

#include "QuestAssetFactory.h"
#include "QuestAsset.h"

UQuestAssetFactory::UQuestAssetFactory()
{
	SupportedClass = UQuestAsset::StaticClass();
	bCreateNew = true;
	bEditAfterNew = true;
}

UObject* UQuestAssetFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UQuestAsset>(InParent, Class, Name, Flags);
}