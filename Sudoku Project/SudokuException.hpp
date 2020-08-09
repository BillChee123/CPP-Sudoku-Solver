//
//  SudokuException.hpp
//  Sudoku Project
//
//  Created by Bill Chee on 9/8/20.
//  Copyright © 2020 Bill Chee. All rights reserved.
//

#ifndef SudokuException_hpp
#define SudokuException_hpp

#include <stdio.h>
#include <exception>

struct SudokuException : public std::exception {
   const char * what () const throw () {
      return "Sudoku is unsolvable";
   }
};

#endif /* SudokuException_hpp */
