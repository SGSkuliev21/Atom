#include "precompile.h"


Ball::Ball(float ballX, float ballY, int speedBallX, int speedBallY)
{
	this->ballX = ballX;
	this->ballY = ballY;

	this->speedBallX = speedBallX;
	this->speedBallY = speedBallY;
	ball = { 0, 0, this->ballX, this->ballY };
}
        

void Ball::drawBall()
{
	ballX = GetScreenWidth() / 2;
	ballY = GetScreenHeight() / 2;
	DrawCircle(ballX, ballY, 25, WHITE);
}

void Ball::ballMovement()
{
	speedBallX = 5;
	speedBallY = 5;

	ballX += speedBallX;
	ballY += speedBallY;

	ClearBackground(BLACK);

	//if (ballY + 15 >= blocks )
	//{
		//speedBallY *= -1
	//}

	//if (ballX + 15 >= blocks )
	//{
		//speedBallX *= -1
	//
}

