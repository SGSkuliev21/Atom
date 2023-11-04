#pragma once
#include "precompile.h"
#include "ball.h"

class Blocks: public Ball{
private:
	Ball ball;
	struct Block {
		Rectangle rec;
		bool isCollided;
	};
	int blockHeight = 25;
	int blockWidth = 50;
	float randomHue = GetRandomValue(0, 360);
	Color randomColor = ColorFromHSV(randomHue, 1.0f, 1.0f);

public:
	std::vector<Block> block;
	void collision();
	Blocks(int blockHeight, int blockWidth);
	void drawRectangle();
};


