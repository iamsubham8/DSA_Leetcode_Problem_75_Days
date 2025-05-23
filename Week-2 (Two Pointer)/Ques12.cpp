// 11. Container With Most Water
// You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).
// Find two lines that together with the x-axis form a container, such that the container contains the most water.
// Return the maximum amount of water a container can store.
// Notice that you may not slant the container.

// https://leetcode.com/problems/container-with-most-water/


class Solution {
    public:
        int maxArea(std::vector<int>& height) {
            int start = 0;
            int end = height.size() - 1;
            int maxCapacity = 0;
            
            while (start < end) {
                int h = std::min(height[start], height[end]);
                int width = end - start;
                int currentCap = h * width;
                
                maxCapacity = std::max(currentCap, maxCapacity);
                
                if (height[start] < height[end]) {
                    start++;
                } else {
                    end--;
                }
            }
            return maxCapacity;
        }
}