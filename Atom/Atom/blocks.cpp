#include "blocks.h"

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