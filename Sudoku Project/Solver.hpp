//
//  Solver.hpp
//  Sudoku Project
//
//  Created by Bill Chee on 9/8/20.
//  Copyright © 2020 Bill Chee. All rights reserved.
//

#ifndef Solver_hpp
#define Solver_hpp

#include <stdio.h>

namespace N {
template<class Puzzle>
class Solver {
public:
    virtual Puzzle solve(Puzzle& puzzle) {
        printf("Virtual definition\n");
        return puzzle;
    };
};
}

#endif /* Solver_hpp */
