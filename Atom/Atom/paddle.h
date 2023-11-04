#pragma once
#include "precompile.h"
class Paddle {
private:
	int paddleStartX;
	int paddleStartY;
	int paddleX;
	int paddleY;

public:
	Paddle(int paddleStartX, int paddleStartY, int paddleX, int paddleY);

	void startingPosition(int paddleStartX, int paddleStartY);
	void drawPaddle(int paddleStartX, int paddleStartY);
	void paddleMovement(int paddleX);
};