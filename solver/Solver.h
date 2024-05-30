//
// Created by Austin Beckstead on 5/30/24.
//
#include <iostream>
#include <vector>
using namespace std;

#ifndef SUDOKU_SOLVER_H
#define SUDOKU_SOLVER_H

class Solver{
public:
    static vector<vector<int>> solve(vector<vector<int>> board);
};

#endif //SUDOKU_SOLVER_H
