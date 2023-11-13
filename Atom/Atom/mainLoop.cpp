#include "mainLoop.h"
#include "precompile.h"
#include "ball.h"
#include "randomChemistry.h"
Ball ball;
Paddle paddle;
Blocks blocks;
randomChemistry chem;

SceneType currentScene;

std::vector<Vector2> equationsPos;
std::vector<std::string> equations;

std::vector<Rectangle>equationsRec;

Game::Game() {

}

void Game::draw()
{
    chem.drawChemistryReactions(equationsPos, equations, equationsRec);
    blocks.drawRectangle();
    ball.drawBall();
    paddle.drawPaddle();
}

void Game::update()
{
    ball.moveBall();
    paddle.paddleMovement();
}

void Game::gameReset()
{
    ball.position.x = 500;
    ball.position.y = 735;
    paddle.paddleX = 500;
    paddle.paddleY = 750;
    paddle.paddle = {paddle.paddleX, paddle.paddleY, 100, 15 };
    blocks.resetBlocks();
    equations.clear();
    equationsPos.clear();
}

void Game::collision()
{
    for (int i = 0; i < equationsRec.size(); i++)
    {
        auto rec = equationsRec[i];
        
            DrawLineV({ rec.x, rec.y }, { rec.x + rec.width, rec.y }, {0,0,0,0});
            DrawLineV({ rec.x + rec.width, rec.y }, { rec.x + rec.width, rec.y + rec.height }, { 0,0,0,0 });
            DrawLineV({ rec.x, rec.y }, { rec.x, rec.y + rec.height }, { 0,0,0,0 });
            DrawLineV({ rec.x, rec.y + rec.height }, { rec.x + rec.width, rec.y + rec.height }, { 0,0,0,0 });
        if (CheckCollisionRecs(paddle.paddle, equationsRec[i]))
        {
            if (chem.rightEl == equations[i])
            {
                currentScene = WON_MENU;
            }
            else
            {
                currentScene = LOST_MENU;
            }
        }

    }
    
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
            if (CheckCollisionCircleRec(ball.position, ball.radius, blocks.blocks[i][j].rec))
            {
                Vector2 blockCenter = { blocks.blocks[i][j].rec.x - (blocks.blocks[i][j].rec.width / 2), blocks.blocks[i][j].rec.y - (blocks.blocks[i][j].rec.height / 2) };
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
                equationsRec.push_back({ blockCenter.x - 50, blockCenter.y + 30,  300, 30});
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
        currentScene = LOST_MENU;
    }
}

void Game::runGame()
{
    
    currentScene = MAIN_MENU;
    InitWindow(1200, 800, "Atom");
    while (!WindowShouldClose())
    {
        ClearBackground(DARKBLUE);
        
        switch (currentScene) 
        {
            case MAIN_MENU:
                mainMenu(currentScene);
                gameReset();
                break;
            case INFO_MENU:
                infoMenu(currentScene);
                break;
            case GAME_MENU:
                BeginDrawing();
                loseGame();
                collision();
                update();
                draw();
                break;
            case WON_MENU:
                wonMenu(currentScene);
                gameReset();
                break;
            case LOST_MENU:
                lostMenu(currentScene);
                gameReset();
                break;
        }
        EndDrawing();
    }
    CloseWindow();
}