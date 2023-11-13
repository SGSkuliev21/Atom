#include "ball.h"

Ball::Ball()
{
    speedBallX = 0.1;
    speedBallY = 0.1;

    position = { 500, 700 };
    radius = 15;
}

void Ball::drawBall() {
    DrawCircle(position.x, position.y, radius, RED);
}

void Ball::moveBall() {
    position.x += speedBallX;
    position.y += speedBallY;
}