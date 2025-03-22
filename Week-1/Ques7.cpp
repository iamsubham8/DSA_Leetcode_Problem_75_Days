// Day – 7
// 238. Product of Array Except Self
// Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].
// The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
// You must write an algorithm that runs in O(n) time and without using the division operation.
// https://leetcode.com/problems/product-of-array-except-self/

class Solution {
public:
    std::vector<int> productExceptSelf(std::vector<int>& nums) {
        int n = nums.size();
        std::vector<int> right(n);
        int pro = 1;

        for (int i = n - 1; i >= 0; i--) {
            pro *= nums[i];
            right[i] = pro;
        }

        std::vector<int> ans(n);
        int left = 1;

        for (int i = 0; i < n - 1; i++) {
            int val = left * right[i + 1];
            ans[i] = val;
            left *= nums[i];
        }

        ans[n - 1] = left;
        return ans;
    }
};
