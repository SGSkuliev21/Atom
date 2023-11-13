#include "ball.h"

Ball::Ball()
{
    speedBallX = 2;
    speedBallY = 2;

    position = { 500, 735 };
    radius = 15;
}

void Ball::drawBall() {
    DrawCircle(position.x, position.y, radius, RED);
}

void Ball::moveBall() {
    position.x += speedBallX;
    position.y += speedBallY;
}