#pragma once
#include "precompile.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>


class randomChemistry {
private:
    vector <string> lines;
    string filename, line;
    ifstream inputFile;
    int counter;
public:
    void ChemistryElements();
    void ChemistryReactions();
};