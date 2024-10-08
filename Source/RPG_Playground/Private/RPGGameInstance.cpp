// Fill out your copyright notice in the Description page of Project Settings.


#include "RPGGameInstance.h"
#include "Kismet/GameplayStatics.h"

static constexpr int SAVE_SLOT_0 = 0;
static constexpr const char* QUEST_LOG_SAVE_NAME = "QuestLogSave";

URPGGameInstance::URPGGameInstance()
{
}

URPGGameInstance::~URPGGameInstance()
{
}

void URPGGameInstance::Init()
{
	Super::Init();
	QuestLog = Cast<UQuestLog>(UGameplayStatics::LoadGameFromSlot(QUEST_LOG_SAVE_NAME, SAVE_SLOT_0));
	if (!QuestLog)
	{
		QuestLog = Cast<UQuestLog>(UGameplayStatics::CreateSaveGameObject(UQuestLog::StaticClass()));
	}
}

void URPGGameInstance::Shutdown()
{
	Super::Shutdown();
}

void URPGGameInstance::Save()
{
	UGameplayStatics::SaveGameToSlot(QuestLog, QUEST_LOG_SAVE_NAME, SAVE_SLOT_0);
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
