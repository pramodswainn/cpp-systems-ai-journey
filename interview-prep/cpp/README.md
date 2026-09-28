# C++

One small runnable example per topic, plus a short note in your own words.

## Topic checklist
- [ ] Memory model: stack vs heap, object lifetime, RAII, rule of 3/5/0
- [ ] Smart pointers: unique_ptr, shared_ptr, weak_ptr
- [ ] Move semantics: rvalue refs, std::move, std::forward, copy elision
- [ ] const correctness, references vs pointers, undefined behavior traps
- [ ] Templates, specialization, basic concepts (C++20)
- [ ] Concurrency: thread, mutex, condition_variable, atomics, deadlocks
- [ ] STL internals: vector growth, map vs unordered_map, iterator invalidation

## How to add a topic
1. Add `src/<topic>.hpp` (or `.cpp`)
2. Add `tests/<topic>_test.cpp` and list it in `CMakeLists.txt`
3. Write 5-10 lines of notes below explaining it in your own words

## Notes
_(Your notes go here. Example: "RAII ties resource lifetime to scope, so cleanup is automatic even on exceptions.")_

Starter example included: `src/unique_resource.hpp` (RAII + move semantics).
