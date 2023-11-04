#include "precompile.h"

Paddle::Paddle(int paddleStartX, int paddleStartYint, int paddleX, int paddleY)
{
	this->paddleStartX = paddleStartX;
	this->paddleStartY = paddleStartY;
	this->paddleY = paddleY;
	this->paddleX = paddleX;
}

void Paddle::startingPosition(int paddleStartX, int paddleStartY)
{
	paddleStartX = 300;
	paddleStartY = 75;
}

void Paddle::drawPaddle(int paddleStartX, int paddleStartY)
{
	DrawRectangle(paddleStartX, paddleStartY, 50, 50, BLACK);
}

void Paddle::paddleMovement(int paddleX)
{
	if (IsKeyPressed(KEY_LEFT))
	{
		paddleX = paddleX - 3;
	}
	if (IsKeyPressed(KEY_RIGHT))
	{
		paddleX = paddleX + 3;
	}
}
