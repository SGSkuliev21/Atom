#pragma once
#include "precompile.h"
class Paddle {
private:
    Rectangle paddle;
    float speed;
    float paddleX, paddleY;
public:
    Paddle();
    void drawPaddle();
    void paddleMovement();
};