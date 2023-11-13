#pragma once

#include "precompile.h"

enum SceneType
{
    MAIN_MENU,
    INFO_MENU,
    GAME_MENU
};

void mainMenu(SceneType& sceneState);
void secondMenu(SceneType& sceneState);