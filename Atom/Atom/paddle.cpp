#include "precompile.h"
#include "paddle.h"

Paddle::Paddle(int paddleX, int paddleY)
{
	this->paddleX = paddleX;
	this->paddleY = paddleY;
}


void Paddle::drawPaddle()
{
	DrawRectangle(paddleX, paddleY, 200, 10, WHITE);
}

void Paddle::paddleMovement()
{
	if (IsKeyDown(KEY_A) || IsKeyDown(KEY_LEFT))
	{
		paddleX -= 10;
	}
	if ((IsKeyDown(KEY_D)) || IsKeyDown(KEY_RIGHT))
	{
		std::cout << "sasho";
		paddleX += 10;
	}
}
