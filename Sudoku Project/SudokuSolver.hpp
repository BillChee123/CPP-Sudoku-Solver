//
//  SudokuSolver.hpp
//  Sudoku Project
//
//  Created by Bill Chee on 9/8/20.
//  Copyright © 2020 Bill Chee. All rights reserved.
//

#ifndef SudokuSolver_hpp
#define SudokuSolver_hpp

#include <stdio.h>
#include "Puzzle.hpp"
#include "Solver.hpp"
#include "Cell.hpp"
#include "SudokuPuzzle.hpp"

namespace N {
class SudokuSolver: public Solver<SudokuPuzzle>
{
public:
    SudokuSolver(SudokuPuzzle& puzzle) : puzzle(puzzle), emptyCells(puzzle.emptyCells) {
        this->N = (int) puzzle.emptyCells.size();
    }
    SudokuPuzzle solve();
private:
    bool backtrack(vector<vector<int>>& vvi, int index);
    SudokuPuzzle& puzzle;
    vector<Cell>& emptyCells;
    int N;
};

}

#endif /* SudokuSolver_hpp */

