#include "blocks.h"

Blocks::Blocks()
{
    blockHeight = 25;
    blockWidth = 50;

	for (int rows = 1; rows <= 12; ++rows)
	{
		for (int cols = 1; cols <= 4; ++cols)
        {
			blocks[rows][cols].rec.x = cols * blockWidth + (GetScreenWidth() - 4 * blockWidth) / 2;
			blocks[rows][cols].rec.y = rows * blockHeight + (GetScreenHeight() - 12 * blockHeight) / 2;
			blocks[rows][cols].rec.width = blockWidth;
			blocks[rows][cols].rec.height = blockHeight;
        }
    }

	for (int i = 0; i < 48; ++i) {
		colors[i] = { (unsigned char)GetRandomValue(0, 255),
					 (unsigned char)GetRandomValue(0, 255),
					 (unsigned char)GetRandomValue(0, 255), 255 };
	}
}

void Blocks::drawRectangle()
{
	for (int rows = 1; rows <= 12; ++rows)
	{
		for (int cols = 1; cols <= 4; ++cols)
        {
            DrawRectangleRec(blocks[rows][cols].rec, colors[rows * 12 + cols]);
        }
    }
}