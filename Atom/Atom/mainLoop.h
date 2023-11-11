#pragma once
#include "precompile.h"
#include "blocks.h"
#include "paddle.h"
#include "ball.h"

class Game{
private:
    Blocks blocks;
    Paddle paddle;
    Ball ball;

public:
    Game();

    void update();
    void draw();
    void ballCollision();

    void runGame();
};
