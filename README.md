# cpp-algorithms

C++17 algorithm solutions and custom data structures.

| # | Task | Approach | Time | Space |
|---|------|----------|------|-------|
| 1 | Second Largest Distinct Number | One pass | O(n) | O(n) |
| 2 | Number Frequency | `std::map` counting | O(n log n) | O(n) |
| 3 | Two Sum | `std::map` lookup | O(n log n) | O(n) |
| 4 | Binary Search (First Occurrence) | Binary search | O(n + Q log n) | O(n) |
| 5 | Valid Brackets | `std::stack` matching | O(n) | O(n) |
| 6 | Range Sum Queries | Prefix sums | O(n + Q) | O(n) |
| 7 | All Subsets | Recursion (backtracking) | O(n·2^n) | O(n) |
| 8 | Max Meetings | Greedy (sort by end time) | O(n log n) | O(n) |

## Data Structures

| Structure | Status |
|-----------|--------|
| Vector | Template: pushBack, popBack, at, deep copy, move |

## Build

```bash
cmake -S . -B build
cmake --build build
```

