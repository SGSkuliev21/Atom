#include "mainLoop.h"

void Game::draw()
{ 

    InitWindow(600, 800, "Atom");
    while (!WindowShouldClose())
    {
        BeginDrawing(); //start drawing
        DrawText("ATOM", 450, 350, 50, WHITE);
        EndDrawing();
    }

}
