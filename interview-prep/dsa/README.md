# DSA

Organized by **pattern**, not by problem number.

| Folder | Pattern | Solved |
|---|---|---|
| hashing/ | hash maps/sets, frequency counting | 1 |
| two-pointers/ | two pointers | 0 |
| sliding-window/ | sliding window | 0 |
| graphs/ | BFS/DFS, shortest path | 0 |
| heaps/ | priority queue, top-K | 0 |

## Per-solution convention
Each solution file starts with a header comment:
```
// Pattern: <pattern>
// Time: O(..)   Space: O(..)
// Note: <what tripped you up / key insight>
```
Link to the problem instead of copying its statement.

## Adding a solution
1. Put `<name>.hpp` + `<name>_test.cpp` in the pattern folder
2. Add the test file to `dsa_tests` in `CMakeLists.txt`
3. Update the table above
