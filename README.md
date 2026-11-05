# cpp-algorithms

C++17 algorithm solutions, with custom data structures planned.

| # | Task | Approach | Time | Space |
|---|------|----------|------|-------|
| 1 | Second Largest Distinct Number | One pass | O(n) | O(n) |
| 2 | Number Frequency | `std::map` counting | O(n log n) | O(n) |
| 3 | Two Sum | `std::map` lookup | O(n log n) | O(n) |
| 4 | Binary Search (First Occurrence) | Binary search | O(n + Q log n) | O(n) |

## Build

```bash
cmake -S . -B build
cmake --build build
```