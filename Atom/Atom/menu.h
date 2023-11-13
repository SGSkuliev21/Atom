#pragma once

#include "precompile.h"

enum SceneType
{
    MAIN_MENU,
    INFO_MENU,
    GAME_MENU,
    WON_MENU,
    LOST_MENU
};

void mainMenu(SceneType& sceneState);
void infoMenu(SceneType& sceneState);
void wonMenu(SceneType& sceneState);
void lostMenu(SceneType& sceneState);