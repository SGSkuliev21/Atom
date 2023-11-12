#include "mainLoop.h"
#include "precompile.h"
#include "ball.h"
#include "randomChemistry.h"

Ball ball;
Paddle paddle;
Blocks blocks;
randomChemistry chem;

std::vector<Vector2> equationsPos;
std::vector<std::string> equations;

Game::Game() {

}

void Game::draw()
{
    chem.drawChemistryReactions(equationsPos,equations);
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
                Vector2 blockCenter = { blocks.blocks[i][j].rec.x + blocks.blocks[i][j].rec.width / 2, blocks.blocks[i][j].rec.y + blocks.blocks[i][j].rec.height / 2 };
                Vector2 ballCollideBlock = { ball.position.x - blockCenter.x, ball.position.x - blockCenter.y };

                if (abs(ballCollideBlock.x) > abs(ballCollideBlock.y))
                {
                    ball.speedBallX *= -1;
                }
                else 
                {
                    ball.speedBallY *= -1;
                }
                equationsPos.push_back(blockCenter);
                equations.push_back(chem.getEquation());
                blocks.blocks[i][j].isHittable = false;
                blocks.blocks[i][j].rec.x = 100000;
                blocks.blocks[i][j].rec.y = 100000;
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