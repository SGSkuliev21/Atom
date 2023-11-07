#pragma once
#include "precompile.h"
class Paddle {

private:
	int paddleX;
	int paddleY;

public:
	Paddle(int paddleX, int paddleY);
	void drawPaddle();
	void paddleMovement();
};