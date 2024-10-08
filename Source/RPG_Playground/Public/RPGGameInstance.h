// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "QuestRegistry.h"
#include "ItemDefAsset.h"
#include "QuestAsset.h"
#include "RPGGameInstance.generated.h"

UCLASS()
class RPG_PLAYGROUND_API URPGGameInstance : public UGameInstance
{
	GENERATED_BODY()
private:
	UPROPERTY(SaveGame)
	TObjectPtr<UQuestLog> QuestLog;

public:
	URPGGameInstance();
	~URPGGameInstance();

	virtual void Init() override;
	virtual void Shutdown() override;

	UFUNCTION(BlueprintCallable, Category = "Game Event")
	void Save();

	UFUNCTION(BlueprintCallable, Category = "Game Event")
	void BeginQuest(UQuestAsset* QuestAsset);

	UFUNCTION(BlueprintCallable, Category = "Game Event")
	void OnItemPickedEvent(UItemDefAsset* ItemDef, int Amount);
};
