#include "ball.h"

Ball::Ball()
{
    speedBallX = 20;
    speedBallY = 20;

    ball = { static_cast<float>(GetScreenWidth() / 2), static_cast<float>(GetScreenHeight() / 2), 15, 15 };
}

void Ball::drawBall()
{
    DrawRectangleRec(ball, RED);
}