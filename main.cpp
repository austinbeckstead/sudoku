#include <iostream>
#include <vector>
#include "solver/Solver.h"
using namespace std;

int main() {
    vector<vector<int>> board = {
            {0, 0},
            {0,0}
    };
    vector<vector<int>> solution = Solver::solve(board);
    for(vector<int> i: solution){
        for(int j: i){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
