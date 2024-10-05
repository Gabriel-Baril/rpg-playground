// Fill out your copyright notice in the Description page of Project Settings.


#include "RPGGameInstance.h"

URPGGameInstance::URPGGameInstance()
{
	QuestLog = NewObject<UQuestLog>();
}

URPGGameInstance::~URPGGameInstance()
{
}

void URPGGameInstance::Init()
{
	Super::Init();

}

void URPGGameInstance::Shutdown()
{
	Super::Shutdown();

}

void URPGGameInstance::BeginQuest(UQuestAsset* QuestAsset)
{
	QuestLog->BeginQuest(QuestAsset);
}

void URPGGameInstance::OnItemPickedEvent(UItemDefAsset* ItemDef, int Amount)
{
	UE_LOG(LogTemp, Warning, TEXT("OnItemPickedEvent: %s"), *ItemDef->ItemName.ToString());

	FQuestEvent event;
	event.Type = EQuestEventType::ItemPicked;
	event.ItemPickedData.ItemPicked = ItemDef;
	event.ItemPickedData.Amount = Amount;

	QuestLog->OnQuestEvent(event);
}
