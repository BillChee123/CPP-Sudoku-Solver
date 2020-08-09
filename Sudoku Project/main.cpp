//
//  main.cpp
//  Sudoku Project
//
//  Created by Bill Chee on 9/8/20.
//  Copyright © 2020 Bill Chee. All rights reserved.
//

#include <iostream>
#include "Puzzle.hpp"
#include "SudokuSolver.hpp"
#include "Solver.hpp"
#include "SudokuPuzzle.hpp"
#include "SudokuException.hpp"

using namespace std;
using namespace N;

int main(int argc, const char * argv[]) {
    vector<vector<int>> vi =
    {{8, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 3, 6, 0, 0, 0, 0, 0},
        {0, 7, 0, 0, 9, 0, 2, 0, 0},
        {0, 5, 0, 0, 0, 7, 0, 0, 0},
        {0, 0, 0, 0, 4, 5, 7, 0, 0},
        {0, 0, 0, 1, 0, 0, 0, 3, 0},
        {0, 0, 1, 0, 0, 0, 0, 6, 8},
        {0, 0, 8, 5, 0, 0, 0, 1, 0},
        {0, 9, 0, 0, 0, 0, 4, 0, 0}
    };

    SudokuPuzzle puzzle("Normal Sudoku", vi);
    SudokuSolver sudoku(puzzle);
    try {
        SudokuPuzzle solvedPuzzle = sudoku.solve();
        vector<vector<int>> vvi = solvedPuzzle.puzzle;
        printf("Printing Solved Puzzle:\n");
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                printf("%d", vvi[i][j]);
                if (j == 8) {
                    printf("\n");
                } else {
                    printf(" ");
                }
            }
        }
    } catch (SudokuException& e) {
        printf("Error: %s\n", e.what());
    }

    return 0;
}
