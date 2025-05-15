// 1004. Max Consecutive Ones III
// Given a binary array nums and an integer k, return the maximum number of consecutive 1's in the array if you can flip at most k 0's.
// https://leetcode.com/problems/max-consecutive-ones-iii/

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l = 0, cnt = 0;
        for (int x : nums) {
            cnt += x ^ 1;
            if (cnt > k) {
                cnt -= nums[l++] ^ 1;
            }
        }
        return nums.size() - l;
    }
};





