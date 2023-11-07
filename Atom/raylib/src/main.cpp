#pragma once

#include "main.h"
#include "menu.h"

using namespace std;

int main(){
    
    SceneType currentScene = MAIN_MENU;
    const int screenWidth = GetScreenWidth();
    const int screenHeight = GetScreenHeight();
    InitWindow(screenWidth, screenHeight, "Atom - Game");

    SetExitKey(0);
    Texture2D background_color = LoadTexture("../img/frames/background.png");

    while (!WindowShouldClose())
    {            
        BeginDrawing();
        DrawTexture(background_color,0,0,WHITE);
        switch (currentScene)
        {
        case MAIN_MENU:
            mainMenu(currentScene);
            break;
        } 

        EndDrawing();
       
    }

    CloseWindow();
};