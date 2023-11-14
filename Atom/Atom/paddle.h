#pragma once
#include "precompile.h"
class Paddle {
private:
    float speed;

public:
    Rectangle paddle;
    float paddleX, paddleY;
    Paddle();

    //Renders the paddle
    void drawPaddle();

    //Updates paddle's position 
    void paddleMovement();
};