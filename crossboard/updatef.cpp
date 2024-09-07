#include <vector>
#include "clue.hpp"

using namespace std;

vector<vector<string>> updatef(const vector<vector<string>>& myBoard, const vector<Clue>& clues, int solve) {
    int h, v, i;
    v = clues[solve].x - 1;
    h = clues[solve].y - 1;
    
    int len = clues[solve].word.size();
    vector<vector<string>> updatedBoard = myBoard;
    for (i = 0; i < len; i++) {
        if (clues[solve].f == 1) {
            updatedBoard[v][h] = clues[solve].word[i];
        } else {
            updatedBoard[v][h] = '_';
        }
        if (clues[solve].direction == 'H') {
            h++;
        } else {
            v++;
        }
    }
    
    return updatedBoard;
}

/*The updatef function updates the crossword puzzle board based on a solved clue. It takes the current game board, the list of clues, and the index of the solved clue as input. It updates the corresponding characters in the board with the solved word, ensuring that only solved clues are reflected in the board.*/