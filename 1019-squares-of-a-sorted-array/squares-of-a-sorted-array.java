class Solution {
    public int[] sortedSquares(int[] nums) {
        int start = 0;
        int end = nums.length - 1;
        int k = end;
        int[] result = new int[nums.length];
        for(int i = 0; i < nums.length; i++){
            nums[i] *= nums[i];
        }
        while (start <= end ) {
            if (nums[start] < nums[end] ) {
                result[k--] = nums[end];
                end--;
                
            }
            else{
                result[k--] = nums[start];
                start++;
            }
            
        }

        return result;
    }
}