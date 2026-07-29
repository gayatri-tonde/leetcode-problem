class Solution {
    public int removeDuplicates(int[] nums) {
        int start = 0;
        int next = start + 1;
        while (start < next && next < nums.length) {
            if (nums[start] == nums[next]) {
                next++;
            } else {
                nums[++start] = nums[next];
                next++;
            }
        }
        return ++start;
    }
}