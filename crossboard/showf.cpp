#include <iostream>
#include <vector>

using namespace std;

void showf(int rows, int cols, const vector<vector<string>>& board) {
    cout << "Current puzzle:\n\n";
    cout << "\t";
    for (int i = 0; i < cols; i++) {
        if (i < 9) {
            cout << "  " << i + 1;
        } else {
            cout << " " << i + 1;
        }
    }
    cout << "\n\t  ";
    for (int i = 0; i < cols; i++) {
        cout << " " << '-' << ' ' << '-';
    }
    cout << "\n";
    for (int i = 0; i < rows; i++) {
        cout << i + 1 << "\t| ";
        for (int j = 0; j < cols; j++) {
            cout << board[i][j] << "  ";
        }
        cout << endl;
    }
}
/*The showf function displays the current state of the crossword puzzle board. It takes the number of rows, number of columns, and the game board as input. It generates a formatted representation of the board with row and column numbers, separators, and the current puzzle state.*/