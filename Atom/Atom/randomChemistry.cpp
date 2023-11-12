#include "randomChemistry.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;
void ChemistryElements() {
        string filename = "Chemistry_elements.txt";

        ifstream inputFile(filename);

        if (!inputFile.is_open()) {
            cout << "I cannot be open! " << filename << endl;
        }

        vector <string> lines;

        string line;
        while (getline(inputFile, line)) {
            lines.push_back(line);
        }

        inputFile.close();

}
void ChemistryReactions() {
        string filename = "Chemistry_reactions.txt";

        ifstream inputFile(filename);

        if (!inputFile.is_open()) {
            cout << "I cannot be open! " << filename << endl;
        }

        vector <string> lines;

        string line;
        while (getline(inputFile, line)) {
            lines.push_back(line);
        }

        inputFile.close();
}