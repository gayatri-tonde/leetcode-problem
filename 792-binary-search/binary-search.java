class Solution {
    public int search(int[] nums, int target) {

        int start = 0;
        int end = nums.length - 1;

        while(start <= end){
            int n = (start + end) / 2;

            if(target == nums[n]){
                return n;
            }

            if(target < nums[n]){
                end = n - 1;
            }

            else{
                start = n + 1;
            }
        }
        return -1;
    }
}