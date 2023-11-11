#include "precompile.h"
#include "paddle.h"

Paddle::Paddle()
{
   paddleX = GetScreenWidth() / 2;
   paddleY = 750;
   speed = 5;

   paddle = { paddleX, paddleY, 100, 15 };
}

void Paddle::drawPaddle() {
    DrawRectangleRec(paddle, RED);
}

void Paddle::paddleMovement() {
    if (IsKeyDown(KEY_A)) {
        paddle.x -= speed * GetFrameTime();
    }

    if (IsKeyDown(KEY_D)) {
        paddle.x += speed * GetFrameTime();
    }

    paddle.x = Clamp(paddle.x, 0, GetScreenWidth() - paddle.width);
}