#pragma once
#include "precompile.h"



class Ball {

private:
	float ballX, ballY;
	int speedBallX, speedBallY;
	
public:
	Ball() : ballX(0.0f), ballY(0.0f), speedBallX(0), speedBallY(0) {};
	Ball(float ballX, float ballY, int speedBallX, int speedBallY);
	Rectangle ball;
 
	void drawBall();
	void ballMovement();
	void ballCollision();
};


