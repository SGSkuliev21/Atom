#pragma once
#include "precompile.h"
#include "ball.h"

class Blocks: public Ball{
private:
	Ball ball;
	struct Block {
		Rectangle rec;
		bool isCollided = false;
	};
	int blockHeight = 15;
	int blockWidth = 30;
	float randomHue = GetRandomValue(0, 360);
	Color randomColor = ColorFromHSV(randomHue, 1.0f, 1.0f);

public:
	Rectangle blocks;
	Block block[100];
	Block boolBlock;
	Blocks(int blockHeight, int blockWidth);
	Blocks() : blockHeight(15), blockWidth(30) {};
	void drawRectangle();
};


