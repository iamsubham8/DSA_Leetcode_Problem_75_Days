// Day – 08
// 334. Increasing Triplet Subsequence
// Given an integer array nums, return true if there exists a triple of indices (i, j, k) such that i < j < k and nums[i] < nums[j] < nums[k]. If no such indices exists, return false.
// https://leetcode.com/problems/increasing-triplet-subsequence/

class Solution {
public:
    bool increasingTriplet(std::vector<int>& nums) {
        int first = INT_MAX;
        int second = INT_MAX;
        
        for (int element : nums) {
            if (first >= element) {
                first = element;
            } else if (second >= element) {
                second = element;
            } else {
                return true;
            }
        }
        return false;
    }
};



