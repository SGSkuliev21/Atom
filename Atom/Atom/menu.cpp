#pragma once

#include "menu.h"
#include <iostream>
#include "raylib.h"

using namespace std;

void mainMenu(SceneType& sceneState) {
    Texture2D menu_game = LoadTexture("/img/buttons/game.svg");
    Texture2D menu_about = LoadTexture("/img/buttons/info.svg");
    Texture2D menu_quit = LoadTexture("/img/buttons/exit.svg");

    Texture2D game_title = LoadTexture("/img/logo.svg");


    bool nextState = IsMouseButtonPressed(MOUSE_BUTTON_LEFT);

    if (CheckCollisionPointRec(GetMousePosition(), (Rectangle) { 711, 519, 458, 119 })) {
        menu_game = LoadTexture("/img/buttons/game1.svg");
        if (nextState) {
            sceneState = INFO_MENU;
        }
    }
    if (CheckCollisionPointRec(GetMousePosition(), (Rectangle) { 711, 657, 458, 119 })) {
        menu_about = LoadTexture("/img/buttons/info1.svg");
        if (nextState) {
            //sceneState = ABOUT_MENU;
        }
    }
    if (CheckCollisionPointRec(GetMousePosition(), (Rectangle) { 711, 795, 458, 119 })) {
        menu_quit = LoadTexture("/img/buttons/exit1.svg");
        if (nextState) {
            CloseWindow();
        }
    }
    DrawTexture(game_title, 525, 292, WHITE);

    // Draw rectangles
    DrawTexture(menu_game, 711, 519, WHITE);
    DrawTexture(menu_about, 711, 657, WHITE);
    DrawTexture(menu_quit, 711, 795, WHITE);

}
void secondMenu(SceneType& sceneState) {
    Texture2D menu_back = LoadTexture("/img/buttons/back.svg");
    Texture2D game_title = LoadTexture("/img/logo.svg");

    bool nextState = IsMouseButtonPressed(MOUSE_BUTTON_LEFT);

    if (CheckCollisionPointRec(GetMousePosition(), (Rectangle) { 711, 795, 458, 119 })) {
        menu_back = LoadTexture("/img/buttons/back1.svg");
        if (nextState) {
            sceneState = INFO_MENU;
        }
    }
    DrawTexture(menu_back, 711, 795, WHITE);

}