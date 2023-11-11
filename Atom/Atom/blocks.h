#pragma once
#include "precompile.h"
#include "ball.h"

class Blocks {

private:

    Color colors[48];

    int blockHeight;
    int blockWidth;

    float xCoordinates[4] = { 100, 300, 500, 700 };
    float yCoordinates[12] = { 50, 150, 250, 300, 350, 400, 450, 500, 550, 600, 650, 700 };

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