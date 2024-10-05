// Fill out your copyright notice in the Description page of Project Settings.

#include "QuestObjectiveItemAssetFactory.h"
#include "QuestObjectiveItemAsset.h"

UQuestObjectiveItemAssetFactory::UQuestObjectiveItemAssetFactory()
{
	SupportedClass = UQuestObjectiveItemAsset::StaticClass();
	bCreateNew = true;
	bEditAfterNew = true;
}

UObject* UQuestObjectiveItemAssetFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UQuestObjectiveItemAsset>(InParent, Class, Name, Flags);
}