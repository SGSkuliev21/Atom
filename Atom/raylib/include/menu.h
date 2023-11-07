#pragma once

#include <iostream>
#include "raylib.h"

enum SceneType
{
    LOGIN_MENU,
    REGISTER_MENU,
    MAIN_MENU,
    SECOND_MENU,
    ABOUT_MENU,
    HELP_MENU,
    GAME_MENU,
    WON_MENU,
    LOST_MENU

};

void mainMenu(SceneType& sceneState);
