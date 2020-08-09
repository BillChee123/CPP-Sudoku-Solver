# C++ Sudoku Solver

## Summary

This is a Sudoku Solver Xcode project built using C++ with simple backtracking algorithm.

To run and test the solver:

- Clone the repository
- Open the project using Xcode
- The underlying sudoku puzzle is a 2D vector, `vector<vector<int>> vi` where it contains 0 - 9, as
  its cell elements, 0 being an unfilled cell.
- To test this code with other puzzle, simply modify the 2D vector in `main.cpp`. and then run the project.

## Concepts Learned

- C++ Templates
  - `template<class Puzzle>` and `template<typename T>`
- C++ header files (`.hpp`)
- Exception handling
  - `std::exception`
  - try, throw, catch
  - Custom exception
- struct
- namespace and the scope operator `::`
- assert command
