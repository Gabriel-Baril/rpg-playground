#pragma once

#include "Engine.h"
#include "Modules/ModuleInterface.h"
#include "Modules/ModuleManager.h"
#include "UnrealEd.h"
#include "IAssetTools.h"

DECLARE_LOG_CATEGORY_EXTERN(RPG_PlaygroundEditor, All, All)

class FRPG_PlaygroundEditorModule: public IModuleInterface
{
public:
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;
private:
};