#include "precompile.h"

Blocks::Blocks(int blockHeight, int blockWidth)
{
	this->blockHeight = blockHeight;
	this->blockWidth = blockWidth;
}


void Blocks::drawRectangle()
{
	for (int i = 0; i < 48; i++)
	{
		if (CheckCollisionRecs(ball.ball, block[i].rec));
		{
			boolBlock.isCollided = true;
		}
	}

	for (int rows = 1; rows <= 12; rows++)
	{
		for (int cols = 1; cols <= 4; cols++)
		{			
			DrawRectangle(5 * rows + 5, 5 * cols + 5, 50, 25, randomColor);		
		}
	}
}
