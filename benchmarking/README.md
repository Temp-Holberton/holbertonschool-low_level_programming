# Benchmarking and Code Efficiency

This directory contains programs and metrics focused on performance measurement, execution time variability, and software energy efficiency as a proxy for CPU activity.

## Compilation
All C programs in this module compile with:
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-long-long filename.c -o output

## Tasks & Files
- **baseline_loop.c**: Measures execution time for 100,000,000 loop iterations using `clock()`. Recorded baseline execution time: ~0.22 seconds. Metrics in `baseline_loop-metrics.md`.
- **comparison_algorithms.c**: Compares execution time between an $O(n^2)$ naive algorithm (~2.71s) and an $O(n)$ single-pass algorithm (~0.000107s). Metrics in `comparison_algorithms-metrics.md`.
- **instrumentation_lab.c**: Measures phase-by-phase execution time across dataset generation, processing, and checksum reduction (Total: 0.000783s). Metrics in `instrumentation_lab-metrics.md`.
- **green_efficiency_analysis.md**: Technical report analyzing benchmarking results, algorithmic efficiency, and software energy sustainability.
