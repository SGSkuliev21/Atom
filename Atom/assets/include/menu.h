#pragma once

#include <iostream>
#include "raylib.h"

enum SceneType
{
    MAIN_MENU,
    INFO_MENU,
};

void mainMenu(SceneType& sceneState);
void secondMenu(SceneType& sceneState);