#pragma once
#include "precompile.h"

class Ball: public Paddle {

private:
	Paddle paddle;
	float ballX, ballY;
	int speedBallX, speedBallY;
	
public:
	Ball() : ballX(0.0f), ballY(0.0f), speedBallX(0), speedBallY(0) {};
	Ball(float ballX, float ballY, int speedBallX, int speedBallY, Paddle paddle);
	Rectangle ball;
 
	void drawBall();
	void ballMovement();
	void ballIsCollided(int speedBallX, int speedBallY);
	void ballBorder(int BallX, int BallY, int speedBallX, int speedBallY);
	void ballCollidedPaddle();
};