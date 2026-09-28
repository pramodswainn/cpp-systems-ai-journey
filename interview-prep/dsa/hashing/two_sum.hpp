#pragma once
// Pattern: hashing (value -> index)
// Time: O(n)   Space: O(n)
// Note: check the complement BEFORE inserting the current element, so an element
// is never paired with itself.

#include <unordered_map>
#include <vector>

inline std::vector<int> twoSum(const std::vector<int>& nums, int target) {
    std::unordered_map<int, int> seen;
    for (int i = 0; i < static_cast<int>(nums.size()); ++i) {
        auto it = seen.find(target - nums[i]);
        if (it != seen.end()) return {it->second, i};
        seen[nums[i]] = i;
    }
    return {};
}
