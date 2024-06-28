cmake_minimum_required(VERSION 3.24)
project(Sudoku)

set(CMAKE_CXX_STANDARD 17)

add_executable(Sudoku main.cpp solver/Solver.h solver/Solver.cpp board/Board.h board/Board.cpp)
