#pragma once
#include "precompile.h"
#include "ball.h"

class Blocks {

private:

    Color colors[48];

    int blockHeight;
    int blockWidth;

    float xCoordinates[4] = { 50, 200, 350, 500 };
    float yCoordinates[12] = { 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200 };

public:

    struct Block {
        Rectangle rec;
        bool isCollided = true;
        Color color;
    };

    Block blocks[12][4];
    Blocks();
    void drawRectangle();
};