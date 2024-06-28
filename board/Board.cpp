//
// Created by Austin Beckstead on 6/27/24.
//

#include "Board.h"
#include <iostream>
#include <vector>
using namespace std;

Board::Board(vector<vector<int> > board) : board(board){
    setRows();
    setColumns();
    setSquares();
}

void Board::setRows(){
    rows.resize(9);
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            if(board[i][j] != 0) {
                rows[i].insert(board[i][j]);
            }
        }
    }
}

void Board::setColumns(){
    columns.resize(9);
    for(vector<int> row: board){
        for(int i = 0; i < 9; i++){
            if(row[i] != 0) {
                columns[i].insert(row[i]);
            }
        }
    }
}
void Board::setSquares(){
    squares.resize(9);
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++) {
            if (board[i][j] != 0) {
                squares[(i / 3) * 3 + j / 3].insert(board[i][j]);
            }
        }
    }
}

vector<vector<int> > Board::getBoard(){
    return board;
}

vector<set<int> > Board::getRows(){
    return rows;
}
vector<set<int> > Board::getColumns(){
    return columns;
}
vector<set<int> > Board::getSquares(){
    return squares;
}

