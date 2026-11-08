# Benchmarking and Code Efficiency

This directory contains programs and metrics focused on performance measurement, execution time variability, and software energy efficiency as a proxy for CPU activity.

## Compilation
All C programs in this module compile with:
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-long-long filename.c -o output

## Tasks
- baseline_loop.c: Measures execution time for 100,000,000 loop iterations using clock(). Metrics recorded in baseline_loop-metrics.md.
