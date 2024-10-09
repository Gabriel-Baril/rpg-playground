// Fill out your copyright notice in the Description page of Project Settings.


#include "RPGGameInstance.h"
#include "Kismet/GameplayStatics.h"

static constexpr int SAVE_SLOT_0 = 0;
static constexpr const char* QUEST_PROGRESS_SAVE_NAME = "QuestProgressSave";

URPGGameInstance::URPGGameInstance()
{
}

URPGGameInstance::~URPGGameInstance()
{
}

void URPGGameInstance::Init()
{
	Super::Init();
	QuestLog = NewObject<UQuestLog>(this);
	QuestProgressSave = Cast<UQuestProgressSave>(UGameplayStatics::LoadGameFromSlot(QUEST_PROGRESS_SAVE_NAME, SAVE_SLOT_0));
	if (!QuestProgressSave)
	{
		QuestProgressSave = Cast<UQuestProgressSave>(UGameplayStatics::CreateSaveGameObject(UQuestProgressSave::StaticClass()));
	}
	else
	{
		QuestLog->Init(QuestProgressSave);
	}
}

void URPGGameInstance::Shutdown()
{
	Super::Shutdown();
}

void URPGGameInstance::Save()
{
	// Serialize data back into QuestProgressSave
	QuestLog->Save(QuestProgressSave);
	UE_LOG(LogTemp, Warning, TEXT("URPGGameInstance::Save"));
	UGameplayStatics::SaveGameToSlot(QuestProgressSave, QUEST_PROGRESS_SAVE_NAME, SAVE_SLOT_0);
}

void URPGGameInstance::BeginQuest(UQuestAsset* QuestAsset)
{
	QuestLog->BeginQuest(QuestAsset, QuestProgressSave);
}

void URPGGameInstance::OnItemPickedEvent(UItemDefAsset* ItemDef, int Amount)
{
	UE_LOG(LogTemp, Warning, TEXT("OnItemPickedEvent: %s"), *ItemDef->ItemName.ToString());

	FQuestEvent event;
	event.Type = EQuestEventType::ItemPicked;
	event.ItemPickedData.ItemPicked = ItemDef;
	event.ItemPickedData.Amount = Amount;

	QuestLog->OnQuestEvent(event, QuestProgressSave);
}
