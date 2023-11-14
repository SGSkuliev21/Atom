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

//Renders main menu
void mainMenu(SceneType& sceneState);

//Renders information about the game
void infoMenu(SceneType& sceneState);

//Renders the menu for winning a game
void wonMenu(SceneType& sceneState);

//Renders the menu for losing a game 
void lostMenu(SceneType& sceneState);