#pragma once
#include "precompile.h"
#include "paddle.h"
#include "blocks.h"

class Ball {


public:
    Vector2 position;
    float radius;
    float speedBallX, speedBallY;
    Ball();

    //Renders ball
    void drawBall();

    //Updates ball's position
    void moveBall();
};