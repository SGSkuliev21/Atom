#pragma once

#include "menu.h"
#include <iostream>
#include "raylib.h"

using namespace std;


void mainMenu(SceneType& sceneState) {
    Texture2D menu_game = LoadTexture("img/buttons/game.png");
    Texture2D menu_about = LoadTexture("img/buttons/info.png");
    Texture2D menu_quit = LoadTexture("img/buttons/exit.png");
    Texture2D background = LoadTexture("img/background.png");
    Texture2D game_title = LoadTexture("img/logo.png");


    bool nextState = IsMouseButtonPressed(MOUSE_BUTTON_LEFT);

    if (CheckCollisionPointRec(GetMousePosition(), Rectangle ({ 65, 358, 371, 104 }))) {
        menu_game = LoadTexture("img/buttons/game1.png");
        if (nextState) {
            sceneState = GAME_MENU;
        }
    }
    if (CheckCollisionPointRec(GetMousePosition(), Rectangle({ 65, 479, 371, 104 }))) {
        menu_about = LoadTexture("img/buttons/info1.png");
        if (nextState) {
            sceneState = INFO_MENU;
        }
    }
    if (CheckCollisionPointRec(GetMousePosition(), Rectangle({ 65, 613, 371, 104 }))) {
        menu_quit = LoadTexture("img/buttons/exit1.png");
        if (nextState) {
            CloseWindow();
        }
    }
    DrawTexture(background, 0, 0, WHITE);
    DrawTexture(game_title, 74, 41, BLACK);

    // Draw rectangles
    DrawTexture(menu_game, 65, 358, WHITE);
    DrawTexture(menu_about, 65, 479, WHITE);
    DrawTexture(menu_quit, 65, 613, WHITE);

}
void secondMenu(SceneType& sceneState) {
    Texture2D menu_back = LoadTexture("img/buttons/back.png");
    Texture2D game_title = LoadTexture("img/logo.png");
    Texture2D background = LoadTexture("img/background1.png");

    bool nextState = IsMouseButtonPressed(MOUSE_BUTTON_LEFT);

    if (CheckCollisionPointRec(GetMousePosition(), Rectangle({ 488, 661, 304, 86 }))) {
        menu_back = LoadTexture("img/buttons/back1.png");
        if (nextState) {
            sceneState = MAIN_MENU;
        }
    }
    DrawTexture(background, 0, 0, WHITE);
    DrawTexture(menu_back, 488, 661, WHITE);

}