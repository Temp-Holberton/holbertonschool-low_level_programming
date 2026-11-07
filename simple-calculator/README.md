# Simple Calculator

A terminal-based interactive calculator built in C with robust input error recovery.

## Compilation
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 calculator.c -o calculator

## Running the Program
./calculator

## Supported Operations
- Addition (Choice 1)
- Subtraction (Choice 2)
- Multiplication (Choice 3)
- Division (Choice 4, with zero-division handling)

## Numeric Behavior & Error Handling
- Operands are processed as integers for basic operations, and division yields decimal results.
- Robust input validation discards invalid non-numeric tokens from `stdin` to prevent infinite loops.
