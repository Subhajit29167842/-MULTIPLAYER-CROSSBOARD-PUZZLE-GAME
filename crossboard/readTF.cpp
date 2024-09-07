#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "clue.hpp"

using namespace std;

vector<Clue> readTF(ifstream& inputFile, int Words) {
    vector<Clue> Clues(Words);
    for (int i = 0; i < Words; i++) {
        inputFile >> Clues[i].direction >> Clues[i].x >> Clues[i].y;
        inputFile.ignore(); 
        string line;
        getline(inputFile, line);
        size_t spacePos = line.find(' ');
        Clues[i].word = line.substr(0, spacePos);
        Clues[i].clue = line.substr(spacePos + 1);
    }

    return Clues;
}
/*The readTF function reads clue data from a text file and stores it in a vector of Clue objects. It takes the input file stream and the number of clues as input. It reads the clue direction, row, and column coordinates, and then extracts the clue word and hint from the input file line.*/