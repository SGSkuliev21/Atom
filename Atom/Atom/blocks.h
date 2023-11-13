#pragma once
#include "precompile.h"
#include "ball.h"

class Blocks {

private:

    Color colors[48];

    int blockHeight;
    int blockWidth;

    float xCoordinates[4] = { 250, 550, 800, 850 };
    float yCoordinates[12] = {50, 150, 250, 350, 450, 550, 650, 750, 850, 950, 1050, 1150};

public:

    struct Block {
        Rectangle rec;
        bool isHittable = true;
        Color color;
    };
    struct fallLetter
    {
        Vector2 position;
        char letter;
        bool isActive;
    };
    fallLetter fallLetter;
    Block blocks[12][4];
    Blocks();
    void resetBlocks();
    void drawRectangle();
};