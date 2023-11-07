#pragma once

#include "menu.h"
#include <iostream>
#include "raylib.h"

using namespace std;

void mainMenu(SceneType& sceneState){
    Texture2D menu_game = LoadTexture("");
    Texture2D menu_about = LoadTexture("");
    Texture2D menu_quit = LoadTexture("");

    Texture2D game_title = LoadTexture("");


    bool nextState = IsMouseButtonPressed(MOUSE_BUTTON_LEFT);

    if (CheckCollisionPointRec(GetMousePosition(),(Rectangle){711 ,519,458,119})){
        menu_game = LoadTexture("");
        if(nextState){
            sceneState = SECOND_MENU;
        }
    } 
    if (CheckCollisionPointRec(GetMousePosition(),(Rectangle){711 ,657,458,119})){
        menu_about = LoadTexture("");
        if (nextState){
            sceneState = ABOUT_MENU;
        }
    }
    if (CheckCollisionPointRec(GetMousePosition(),(Rectangle){711 ,795,458 ,119})){
        menu_quit = LoadTexture("");
        if (nextState){
            CloseWindow();
        }
    } 
        DrawTexture(game_title, 525  ,292 ,WHITE); 

            // Draw rectangles
        DrawTexture(menu_game, 711  ,519  , WHITE);
        DrawTexture(menu_about, 711 ,657 , WHITE);
        DrawTexture(menu_quit, 711 ,795 , WHITE);

}   
