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
    DrawTexture(game_title, 400, 33, WHITE);

    // Draw rectangles
    DrawTexture(menu_game, 400, 358, WHITE);
    DrawTexture(menu_about, 400, 479, WHITE);
    DrawTexture(menu_quit, 400, 613, WHITE);

}
void infoMenu(SceneType& sceneState) {
    Texture2D menu_back = LoadTexture("img/buttons/back.png");
    Texture2D game_title = LoadTexture("img/logo1.png");
    Texture2D rulesGame = LoadTexture("img/rules.png");
    Texture2D background = LoadTexture("img/background1.png");

    bool nextState = IsMouseButtonPressed(MOUSE_BUTTON_LEFT);

    if (CheckCollisionPointRec(GetMousePosition(), Rectangle({ 444, 661, 304, 86 }))) {
        menu_back = LoadTexture("img/buttons/back1.png");
        if (nextState) {
            sceneState = MAIN_MENU;
        }
    }
    DrawTexture(background, 0, 0, WHITE);
    DrawTexture(rulesGame, 66, 261, WHITE);
    DrawTexture(game_title, 400, 33, WHITE);
    DrawTexture(menu_back, 444, 661, WHITE);

}
void wonMenu(SceneType& sceneState) {
    Texture2D menu_back = LoadTexture("img/buttons/back2.png");
    Texture2D menu_exit = LoadTexture("img/buttons/exit2.png");
    Texture2D game_title = LoadTexture("img/logo1.png");
    Texture2D background = LoadTexture("img/background1.png");
    Texture2D text_won = LoadTexture("img/won.png");

    bool nextState = IsMouseButtonPressed(MOUSE_BUTTON_LEFT);

    if (CheckCollisionPointRec(GetMousePosition(), Rectangle({ 75, 628, 371, 103 }))) {
        menu_exit = LoadTexture("img/buttons/exit3.png");
        if (nextState) {
            CloseWindow();
        }
    }    
    if (CheckCollisionPointRec(GetMousePosition(), Rectangle({ 820, 628, 371, 103 }))) {
        menu_back = LoadTexture("img/buttons/back3.png");
        if (nextState) {
            sceneState = MAIN_MENU;
        }
    }
    DrawTexture(background, 0, 0, WHITE);
    DrawTexture(text_won, 220, 240, WHITE);
    DrawTexture(game_title, 400, 33, WHITE);
    DrawTexture(menu_back, 820, 628, WHITE);
    DrawTexture(menu_exit, 75, 628, WHITE);
}
void lostMenu(SceneType& sceneState) {
    Texture2D menu_back = LoadTexture("img/buttons/back2.png");
    Texture2D menu_exit = LoadTexture("img/buttons/exit2.png");
    Texture2D game_title = LoadTexture("img/logo1.png");
    Texture2D background = LoadTexture("img/background1.png");
    Texture2D text_lost = LoadTexture("img/lost.png");

    bool nextState = IsMouseButtonPressed(MOUSE_BUTTON_LEFT);

    if (CheckCollisionPointRec(GetMousePosition(), Rectangle({ 75, 628, 371, 103 }))) {
        menu_exit = LoadTexture("img/buttons/exit3.png");
        if (nextState) {
            CloseWindow();
        }
    }    
    if (CheckCollisionPointRec(GetMousePosition(), Rectangle({ 820, 628, 371, 103 }))) {
        menu_back = LoadTexture("img/buttons/back3.png");
        if (nextState) {
            sceneState = MAIN_MENU;
        }
    }
    DrawTexture(background, 0, 0, WHITE);
    DrawTexture(text_lost, 200, 265, WHITE);
    DrawTexture(game_title, 410, 33, WHITE);
    DrawTexture(menu_back, 820, 628, WHITE);
    DrawTexture(menu_exit, 75, 628, WHITE);
}
