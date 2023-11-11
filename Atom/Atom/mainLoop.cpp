#include "mainLoop.h"
#include "precompile.h"
#include "ball.h"

Ball ball;
Paddle paddle;
Blocks blocks;

Game::Game() {

}

void Game::draw()
{
    blocks.drawRectangle();
    ball.drawBall();
    paddle.drawPaddle();
}

void Game::update() 
{
    ball.moveBall();

    paddle.paddleMovement();
}

void Game::collision()
{
    if ((ball.position.x + ball.radius) >= 1200 || (ball.position.x - ball.radius) <= 0) 
    {
        ball.speedBallX *= -1;
    }

    if ((ball.position.y - ball.radius) <= 0) 
    {
        ball.speedBallY *= -1;
    }


    if (CheckCollisionCircleRec(ball.position, ball.radius, paddle.paddle)) 
    {
        ball.speedBallY *= -1;
    }

   for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 4; j++) 
        {
            if(CheckCollisionCircleRec(ball.position, ball.radius, blocks.blocks[i][j].rec))
            {
                blocks.blocks[i][j].isCollided = false;
                ball.speedBallY *= -1;
            }
        }
    }

   
}

void Game::loseGame()
{
    if ((ball.position.y + ball.radius) >= 800)
    {
        EndDrawing();
    }
}

void Game::runGame()
{
    InitWindow(1200, 800, "Atom");
    while (!WindowShouldClose())
    {
        loseGame();
        collision();
        update();

        BeginDrawing();
        ClearBackground(RAYWHITE);

        draw();

        EndDrawing();
    }
    CloseWindow();
}