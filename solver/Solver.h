//
// Created by Austin Beckstead on 5/30/24.
//
#include <iostream>
#include <vector>
#include "../board/Board.h"
using namespace std;

#ifndef SUDOKU_SOLVER_H
#define SUDOKU_SOLVER_H

class Solver{
public:
    static Board solve(Board board);
};

#endif //SUDOKU_SOLVER_H
