//
// Created by Austin Beckstead on 6/27/24.
//
#include <iostream>
#include <vector>
#include <set>
using namespace std;
#ifndef SUDOKU_BOARD_H
#define SUDOKU_BOARD_H


class Board {
    public:
    Board(vector<vector<int> > board);
    vector<vector<int> > getBoard();
    vector<set<int> > getRows();
    vector<set<int> > getColumns();
    vector<set<int> > getSquares();

private:
    vector<vector<int> > board;
    vector<set<int> > columns;
    vector<set<int> > rows;
    vector<set<int> > squares;
    void setColumns();
    void setRows();
    void setSquares();
};


#endif //SUDOKU_BOARD_H
