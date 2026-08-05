class Solution {
    public int majorityElement(int[] nums) {
        int n = nums.length-1;
        int j = 0;
        int counter = 0;
        while (j <= n/2){
            counter = 0;
            for(int i = 0; i <= n; i++){
                if(nums[j] == nums[i] ){
                    counter++;
                }
                if(counter > n/2){
                    return nums[j];
                }
            }
            j++;
        }
        return nums[j];
    }
}