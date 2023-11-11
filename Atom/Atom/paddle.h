#pragma once
#include "precompile.h"
class Paddle {
private:

    float speed;
    float paddleX, paddleY;
public:
    Rectangle paddle;
    Paddle();
    void drawPaddle();
    void paddleMovement();
};