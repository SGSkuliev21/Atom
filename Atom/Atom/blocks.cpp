#include "blocks.h"

Blocks::Blocks()
{
    blockHeight = 75;
    blockWidth = 100;

    resetBlocks();
}

void Blocks::drawRectangle()
{
    for (int rows = 0; rows < 12; rows++)
    {
        for (int cols = 0; cols < 4; cols++)
        {
            if (blocks[rows][cols].isHittable)
            {
                DrawRectangleRec(blocks[rows][cols].rec, blocks[rows][cols].color);
            }
        }
    }
}

void Blocks::resetBlocks()
{
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

    for (int rows = 0; rows < 12; ++rows)
    {
        for (int cols = 0; cols < 4; ++cols)
        {
            this->blocks[rows][cols].rec.x = xCoordinates[rows];
            this->blocks[rows][cols].rec.y = yCoordinates[cols];
            this->blocks[rows][cols].isHittable = 1;
            
        }
    }
}