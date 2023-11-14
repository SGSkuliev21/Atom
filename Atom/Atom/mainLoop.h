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

    //Renders everyting
    void draw();

    //Updates all object positions
    void update();

    //Resets everything
    void gameReset();

    //Starts the game
    void runGame();

    //Checks for all collisions
    void collision();

    //Calls the menu for losing a game
    void loseGame();
};