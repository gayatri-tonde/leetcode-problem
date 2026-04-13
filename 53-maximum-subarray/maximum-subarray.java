class Solution {
    public int maxSubArray(int[] nums) {
        int max = Integer.MIN_VALUE;
        int curr = 0;
        for (int i : nums) {
            curr = Math.max(curr + i, i);
            max = Math.max(max, curr);
        }
        return max;
    }
}