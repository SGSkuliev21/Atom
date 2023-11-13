#include "randomChemistry.h"
#include <string>



randomChemistry::randomChemistry()
{
    srand(time(0));

    std::string filenameEq = "./Chemistry_reactions.txt";
    std::ifstream inputFileEq(filenameEq);
    if (!inputFileEq.is_open())
    {
        std::cout << "I cannot be open! " << filenameEq << std::endl;
    }
    while (getline(inputFileEq, lineEq))
    {
        linesEq.push_back(lineEq);
    }
    randomLine = rand() % 20;
    randomLineEq = linesEq[randomLine];
    tempEq = randomLineEq.c_str();
    inputFileEq.close();

}

void randomChemistry::drawChemistryReactions(std::vector<Vector2>& equationsPos, std::vector<std::string>& equations, std::vector<Rectangle>& equationsRec)
{
    DrawText(tempEq, 400, 0, 30, BLACK);
    for (int i = 0; i < equations.size(); i++)
    {
        DrawText(equations[i].c_str(), 100 + (equationsPos[i].x - MeasureText(equations[i].c_str(), 30) / 2), equationsPos[i].y + 30, 30, BLACK);
        equationsPos[i].y = equationsPos[i].y + 1;
        equationsRec[i].y = equationsRec[i].y + 1;

    }
}

std::string randomChemistry::getEquation()
{
    std::string filenameEl = "./Chemistry_elements.txt";
    std::ifstream inputFileEl(filenameEl);
    if (!inputFileEl.is_open())
    {
        std::cout << "I cannot be open! " << filenameEl << std::endl;
    }
    while (getline(inputFileEl, lineEl))
    {
        linesEl.push_back(lineEl);
    }
    randomLineEl = linesEl[rand() % 20];
    tempEl = randomLineEl.c_str();
    rightEl = linesEl[randomLine];
    
    inputFileEl.close();
    return tempEl;
}