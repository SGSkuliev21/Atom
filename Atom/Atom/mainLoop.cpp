#include "mainLoop.h"
#include "precompile.h"

Game::Game(){

}

void Game::runGame()
{ 
    InitWindow(1200, 800, "Atom");
    while(!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        //paddle.drawPaddle();
        paddle.paddleMovement();
        EndDrawing();
    }
    CloseWindow();
}
