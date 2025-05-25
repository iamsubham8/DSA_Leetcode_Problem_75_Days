// 1207. Unique Number of Occurrences
// Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.
// https://leetcode.com/problems/unique-number-of-occurrences/

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> cnt;
        for (int& x : arr) {
            ++cnt[x];
        }
        unordered_set<int> vis;
        for (auto& [_, v] : cnt) {
            if (vis.count(v)) {
                return false;
            }
            vis.insert(v);
        }
        return true;
    }
};
