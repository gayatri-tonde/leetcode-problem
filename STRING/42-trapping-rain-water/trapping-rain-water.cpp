class Solution {
public:
    int trap(vector<int>& heights) {
        int leftMax[20000], rightMax[20000];
        leftMax[0] = heights[0]; // initializing with INT_MIN will give +ve
                                 // value when subracted due to bit manupalation
        rightMax[heights.size() - 1] = heights[heights.size() - 1];
        // leftMax[i] will store the maximum height to the left of each index i
        // rightMax[i] will store the maximum height to the right of each index
        // i
        for (int i = 1; i < heights.size(); i++) {
            leftMax[i] = max(heights[i - 1], leftMax[i - 1]);
        }

        for (int i = heights.size() - 2; i >= 0; i--) {
            rightMax[i] = max(heights[i + 1], rightMax[i + 1]);
        }

        int trappedWater = 0;
        for (int i = 0; i < heights.size(); i++) {
            int currWater = min(leftMax[i], rightMax[i]) - heights[i];
            if (currWater > 0) {
                trappedWater += currWater;
            }
        }
        return trappedWater;
        // time complexity: O(n)
        // space complexity: O(n) due to leftMax and rightMax arrays
    }
};