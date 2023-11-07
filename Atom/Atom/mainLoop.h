#pragma once
#include "precompile.h"
#include "blocks.h"
#include "paddle.h"

class Game{
private:
    Blocks blocks;
    Paddle paddle;

public:
    Game();
    void runGame();
};
