// 643. Maximum Average Subarray I
// You are given an integer array nums consisting of n elements, and an integer k.
// Find a contiguous subarray whose length is equal to k that has the maximum average value and return this value. Any answer with a calculation error less than 10-5 will be accepted.
 
// https://leetcode.com/problems/maximum-average-subarray-i/
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
         int curr = 0;

        for (int i = 0; i < k; i++) {
            curr += nums[i];
        }

        int maxx = curr;

        for (int i = k; i < nums.size(); i++) {
            curr += nums[i] - nums[i - k];
            maxx = max(maxx, curr);
        }

        return (double)maxx / k;
    }
};
