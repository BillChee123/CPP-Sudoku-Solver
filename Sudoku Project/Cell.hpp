//
//  Cell.hpp
//  Sudoku Project
//
//  Created by Bill Chee on 9/8/20.
//  Copyright © 2020 Bill Chee. All rights reserved.
//

#ifndef Cell_hpp
#define Cell_hpp

#include <stdio.h>

struct Cell {
    int row;
    int col;
    bool operator==(const Cell& other) const {
        return row == other.row && col == other.col;
    };

    // this could be moved in to std::hash<Point>::operator()
    size_t operator()(const Cell& cellToHash) const noexcept {
        size_t hash = cellToHash.row + 10 * cellToHash.col;
        return hash;
    };
};

#endif /* Cell_hpp */
