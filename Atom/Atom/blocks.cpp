#include "precompile.h"

Blocks::Blocks(int blockHeight, int blockWidth)
{
	this->blockHeight = blockHeight;
	this->blockWidth = blockWidth;
}

void Blocks::collision()
{
	for (int i = 0; i < 48; i++)
	{
		if (CheckCollisionRecs(ball.ball, block[i].rec));
		{
			//bool = false draw rec ako e true
		}
	}
}

void Blocks::drawRectangle()
{
	for (int rows = 1; rows <= 12; rows++)
	{
		for (int cols = 1; cols <= 4; cols++)
		{
			DrawRectangle(blockWidth * rows, blockHeight * cols, blockWidth, blockHeight, randomColor);
		}
	}
}