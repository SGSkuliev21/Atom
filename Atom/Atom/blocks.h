#pragma once
#include "precompile.h"

class Blocks {

private:
	int blockHeight = 25;
	int blockWidth = 50;
	float randomHue = GetRandomValue(0, 360);
	Color randomColor = ColorFromHSV(randomHue, 1.0f, 1.0f);
	
public:

	void block(int blockHeight, int blockWidth)
	{
		this->blockHeight = blockHeight;
		this->blockWidth = blockWidth;
	}
	void drawRectangle();
};    