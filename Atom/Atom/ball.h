#pragma once
#include "precompile.h"

class Ball {

private:
	int ballX, ballY;
	int speedBallX, speedBallY;

public:

	Ball(int ballX, int ballY, int speedBallX, int speedBallY);

 
	void drawBall();
	void ballMovement();
	void ballCollision();
};

