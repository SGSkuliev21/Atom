#pragma once
#include "precompile.h"
#include "paddle.h"

class Ball {
private:
    float ballX, ballY;
    float speedBallX, speedBallY;

    Rectangle ball;
public:
    Ball();

    void drawBall();
};