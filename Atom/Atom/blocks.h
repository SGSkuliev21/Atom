#pragma once
#include "precompile.h"
#include "ball.h"

class Blocks {

private:

    Color colors[48];

    int blockHeight;
    int blockWidth;

    float xCoordinates[4] = { 500, 700, 900, 1200};
    float yCoordinates[12] = { 0, 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100 };

public:

    struct Block {
        Rectangle rec;
        bool isHittable = true;
        Color color;
    };

    Block blocks[12][4];
    Blocks();
    void drawRectangle();
};