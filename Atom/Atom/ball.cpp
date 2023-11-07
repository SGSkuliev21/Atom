#include "precompile.h"


Ball::Ball(float ballX, float ballY, int speedBallX, int speedBallY, Paddle paddle)
{
	this->ballX = ballX;
	this->ballY = ballY;

	this->speedBallX = speedBallX;
	this->speedBallY = speedBallY;

	this->paddle = paddle;

	ball = { 0, 0, this->ballX, this->ballY };
}
        

void Ball::drawBall()
{
	ballX = GetScreenWidth() / 2;
	ballY = GetScreenHeight() / 2;
	DrawCircle(ballX, ballY, 10, WHITE);
}

void Ball::ballMovement()
{
	speedBallX = 5;
	speedBallY = 5;

	ballX += speedBallX;
	ballY += speedBallY;

	ClearBackground(BLACK);
}

void Ball::ballIsCollided(int speedBallX, int speedBallY)
{
	speedBallY *= -1;
	speedBallX *= -1;
}

void Ball::ballBorder(int BallX, int BallY, int speedBallX, int speedBallY)
{
	if (BallX == 0 || BallX == 600)
	{
		speedBallX *= -1;
	}
}

void Ball::ballCollidedPaddle()
{
	if (CheckCollisionRecs(ball, paddle.paddle));
	{
		speedBallY *= -1;
		speedBallX *= -1;
	}
}
