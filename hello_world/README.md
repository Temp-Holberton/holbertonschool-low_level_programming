# Project: 0x00. C - Hello, World

A foundational project introducing C programming, the compilation process, and basic tools.

## Tasks

- **0-preprocessor**: A 2-line Bash script that passes a C source file (defined in the $CFILE environment variable) through the C preprocessor using `gcc -E` and saves the preprocessed output into a file named `c`.
- **1-compiler**: A 2-line Bash script that compiles a C source file into an object file without linking using `gcc -c $CFILE`, transforming `.c` source files into `.o` object files.
- **2-assembler**: A 2-line Bash script that generates assembly code from a C source file using `gcc -S $CFILE`, producing a `.s` file.
- **3-name**: A 2-line Bash script that compiles a C source file into a custom-named executable called `cisfun` using `gcc $CFILE -o cisfun`.
- **4-puts.c**: A C program that prints a specific quote using the `puts` function and returns 0, written following Betty style.
