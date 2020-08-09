//
//  SudokuSolver.cpp
//  Sudoku Project
//
//  Created by Bill Chee on 9/8/20.
//  Copyright © 2020 Bill Chee. All rights reserved.
//

#include "SudokuSolver.hpp"
#include "SudokuException.hpp"
#include <unordered_set>

namespace N {

SudokuPuzzle SudokuSolver::solve() {
    printf("Solving Sudoku Puzzle with name: %s\n", puzzle.name.c_str());
    vector<vector<int>> solvedPuzzle = puzzle.puzzle; // copy
    if (!backtrack(solvedPuzzle, 0)) {
        throw SudokuException();
    }
    puzzle.puzzle = solvedPuzzle;
    return puzzle;
}

void filterBySubgrid(vector<vector<int>>& vvi,
                     unordered_set<int>& taken,
                     int row,
                     int col) {
    int rowLow = (row / 3) * 3;
    int colLow = (col / 3) * 3;
    for (int r = rowLow; r < rowLow + 2; r++) {
        for (int c = colLow; c < colLow + 2; c++) {
            if (r == row && c == col) {
                continue;
            }
            taken.insert(vvi[r][c]);
        }
    }
    return;
}

bool SudokuSolver::backtrack(vector<vector<int>>& vvi, int index) {
    if (index == N) {
        return true;
    }
    unordered_set<int> taken;
    Cell currentCell = emptyCells[index];
    int row = currentCell.row, col = currentCell.col;
    for (int i = 0; i < 9; i++) {
        if (i != row && vvi[i][col] != 0) {
            taken.insert(vvi[i][col]);
        }
        if (i != col && vvi[row][i] != 0) {
            taken.insert(vvi[row][i]);
        }
    }
    filterBySubgrid(vvi, taken, row, col);

    for (int option = 1; option < 10; option++) {
        if (taken.find(option) != taken.end()) {
            continue;
        }
        assert (vvi[row][col] == 0);
        vvi[row][col] = option;
        if (backtrack(vvi, index + 1)) {
            return true;
        }
        vvi[row][col] = 0;
    }
    return false;
}
}
