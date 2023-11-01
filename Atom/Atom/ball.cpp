#include "ball.h"

Ball::Ball(int ballX, int ballY, int speedBallX, int speedBallY)
{
	this->ballX = ballX;
	this->ballY = ballY;

	this->speedBallX = speedBallX;
	this->speedBallY = speedBallY;
}



void Ball::drawBall()
{
	DrawCircle(ballX, ballY, 25, WHITE);
}

void Ball::ballMovement()
{
	speedBallX = 5;
	speedBallY = 5;
}

void Ball::ballCollision()
{
	ballX += speedBallX;
	ballY += speedBallY;

	if ((ballX + 25 >= GetScreenWidth()) || (ballX - 25 <= 0))
	{
		speedBallX = speedBallX * -1;
	}

	if ((ballY + 25 >= GetScreenHeight()) || (ballY - 25 <= 0))
	{
		speedBallY = speedBallY * -1;
	}
}
