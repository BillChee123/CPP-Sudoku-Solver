//
//  SudokuPuzzle.cpp
//  Sudoku Project
//
//  Created by Bill Chee on 9/8/20.
//  Copyright © 2020 Bill Chee. All rights reserved.
//

#include "SudokuPuzzle.hpp"

namespace N {

void SudokuPuzzle::setEmptyCells() {
    for (int i  = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (puzzle[i][j] == 0) {
                Cell cell = { i, j };
                emptyCells.push_back(cell);
            }
        }
    }
}

SudokuPuzzle::SudokuPuzzle(string name, vector<vector<int>> puzzle) {
    this->name = name;
    this->puzzle = puzzle;
    setEmptyCells();
}

}
