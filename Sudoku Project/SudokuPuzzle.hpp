//
//  SudokuPuzzle.hpp
//  Sudoku Project
//
//  Created by Bill Chee on 9/8/20.
//  Copyright © 2020 Bill Chee. All rights reserved.
//

#ifndef SudokuPuzzle_hpp
#define SudokuPuzzle_hpp

#include <stdio.h>
#include <vector>
#include "Puzzle.hpp"
#include "Cell.hpp"

using namespace std;

namespace N {
class SudokuPuzzle: public Puzzle {
public:
    SudokuPuzzle(string name, vector<vector<int>> puzzle);
    vector<vector<int>> puzzle;
    vector<Cell> emptyCells;
private:
    void setEmptyCells();
};
}

#endif /* SudokuPuzzle_hpp */
