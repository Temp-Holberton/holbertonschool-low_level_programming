# Simple Calculator

A terminal-based interactive calculator built in C.

## Compilation
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 calculator.c -o calculator

## Running the Program
./calculator

## Supported Operations
- Addition (Choice 1)
- Subtraction (Choice 2)
- Multiplication (Choice 3)
- Division (Choice 4, with zero-division handling)

## Numeric Behavior
- Operands are processed as integers for addition, subtraction, and multiplication.
- Division casts operands to floating-point numbers to provide accurate decimal results.
