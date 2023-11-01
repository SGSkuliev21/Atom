#pragma once
#include "precompile.h"

class Game :public Ball, Blocks {

protected:
    Ball ball;
    Blocks blocks;

private:
    void draw();   

public:
    
};
