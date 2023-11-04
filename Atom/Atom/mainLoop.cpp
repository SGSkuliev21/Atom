#include "mainLoop.h"

void Game::draw()
{ 

    InitWindow(600, 800, "Atom");
    while (!WindowShouldClose())
    {
        BeginDrawing(); //start drawing
        drawRectangle();
        EndDrawing();
    }

}
