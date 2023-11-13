#pragma once
#include "precompile.h"

class randomChemistry 
{
private:
    std::vector<std::string>linesEl;
    std::vector<std::string>linesEq;
    std::string filenameEl, lineEl;
    std::string filenameEq, lineEq;
    std::ifstream inputFileEl;
    std::ifstream inputFileEq;
    int randomNumberEl;
    int randomNumberEq;
    std::string randomLineEl;
    std::string randomLineEq;
    const char* tempEq;
    const char* temp;
    Texture2D fontTexture;
    Image fontImage;
    int randomLine;
    
    

public:
    std::string getEquation();
    randomChemistry();
    const char* tempEl;
    Rectangle recEl;
    std::string rightEl;
    bool showEl = false;
    void drawChemistryReactions(std::vector<Vector2> &equationsPos, std::vector<std::string> &equations, std::vector<Rectangle> &equationsRec);
};


