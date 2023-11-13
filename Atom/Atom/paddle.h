#pragma once
#include "precompile.h"
class Paddle {
private:
    float speed;

public:
    Rectangle paddle;
    float paddleX, paddleY;
    Paddle();
    void drawPaddle();
    void paddleMovement();
};