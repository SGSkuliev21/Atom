#include "blocks.h"

Blocks::Blocks()
{
    blockHeight = 50;
    blockWidth = 100;

    for (int rows = 0; rows < 12; ++rows)
    {
        for (int cols = 0; cols < 4; ++cols) 
        {
            blocks[rows][cols].color = 
            {
                (unsigned char)GetRandomValue(0, 255),
                (unsigned char)GetRandomValue(0, 255),
                (unsigned char)GetRandomValue(0, 255),
                255
            };
        }
    }

    for (int rows = 0; rows < 12; ++rows)
    {
        for (int cols = 0; cols < 4; ++cols)
        {
            this->blocks[rows][cols].rec.x = xCoordinates[rows];
            this->blocks[rows][cols].rec.y = yCoordinates[cols];
            this->blocks[rows][cols].rec.width = blockWidth;
            this->blocks[rows][cols].rec.height = blockHeight;
        }
    }
}

void Blocks::drawRectangle()
{
    for (int rows = 0; rows < 12; rows++)
    {
        for (int cols = 0; cols < 4; cols++)
        {
            if (blocks[rows][cols].isCollided)
            {
                DrawRectangleRec(this->blocks[rows][cols].rec, this->blocks[rows][cols].color);
            }
        }
    }
}