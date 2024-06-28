#include <iostream>
#include <vector>
#include "solver/Solver.h"
#include "board/Board.h"
using namespace std;

int main() {
    vector<vector<int> > board = {
            {0, 0, 4, 0, 5, 0, 0, 0, 0},
            {9, 0, 0, 7, 3, 4, 6, 0, 0},
            {0, 0, 3, 0, 2, 1, 0, 4, 9},
            {0, 3, 5, 0, 9, 0, 4, 8, 0},
            {0, 9, 0, 0, 0, 0, 0, 3, 0},
            {0, 7, 6, 0, 1, 0, 9, 2, 0},
            {3, 1, 0, 9, 7, 0, 2, 0, 0},
            {0, 0, 9, 1, 8, 2, 0, 0, 3},
            {0, 0, 0, 0, 6, 0, 1, 0, 0}
    };

    Board gameBoard = Board(board);
    //vector<vector<int> > solution = Solver::solve(board);
    vector<set<int> > solution = gameBoard.getColumns();
    for(set<int> i: solution){
        for(int j: i){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
