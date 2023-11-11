#pragma once
#include "precompile.h"
#include "ball.h"

class Blocks {
private:
    struct Block {
        Rectangle rec;
        bool isCollided = false;
        Color color;
    };
	Block blocks[12][4];
	Color colors[48];

	int blockHeight;
    int blockWidth;

public:
    Blocks();
    void drawRectangle();
};
