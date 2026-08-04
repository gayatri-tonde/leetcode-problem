class Solution {
    public int maxArea(int[] height) {
        int start = 0;
        int end = height.length - 1;
        int max = 0;
        while (start < end) {
            int count;
            if (height[start] < height[end]) {
                count = height[start] * (end - start);
                start++;
            } else {
                count = height[end] * (end - start);
                end--;
            }
            max = Math.max(max, count);
        }
        return max;
    }
}