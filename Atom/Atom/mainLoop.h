#pragma once
#include "precompile.h"
#include "blocks.h"
#include "paddle.h"
#include "ball.h"
#include "menu.h"


class Game {
private:
    Blocks blocks;
    Paddle paddle;
    Ball ball;

public:
    Game();

    void draw();
    void update();

    void runGame();
    void collision();
    void loseGame();
};