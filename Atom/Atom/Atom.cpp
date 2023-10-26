#include <iostream>
#include <raylib.h>


const int screenWidth = 1000;
const int screenHeight = 750;

int main()
{
    InitWindow(screenWidth, screenHeight, "Atom");
    while (!WindowShouldClose())  
    {
        BeginDrawing(); //start drawing
        DrawText("ATOM", 450, 350, 50, WHITE);

        EndDrawing();    
    }
    CloseWindow();        // Close window and OpenGL context

}