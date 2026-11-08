# Algorithmic Efficiency Comparison Metrics

## Raw Execution Runs
### Run 1
Naive algorithm result: 625025000
Naive algorithm time: 3.503774 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000133 seconds

### Run 2
Naive algorithm result: 625025000
Naive algorithm time: 3.428024 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000130 seconds

### Run 3
Naive algorithm result: 625025000
Naive algorithm time: 3.421779 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000133 seconds

## Analysis & Summary

### Observations
- **Naive Algorithm ($O(n^2)$ complexity):** Evaluates nested loops scaling quadratically with `ARRAY_SIZE = 50000`, resulting in significantly higher CPU cycles and execution time.
- **Single-Pass Algorithm ($O(n)$ complexity):** Iterates through the array exactly once, keeping CPU activity minimal and energy consumption low.

### Relative Difference
- The naive algorithm is substantially slower (typically thousands of times slower) than the single-pass algorithm due to quadratic growth vs. linear growth.
