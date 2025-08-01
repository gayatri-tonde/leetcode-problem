class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        // int i = 0;
        // int j = 1;
        // int k = 0;
        // while (k < n / 2 && i < n) {
        //     if (nums[i] == nums[j] && j < n) {
        //         k++;
        //         j++;
        //     }
        //     else {
        //         k = 0;
        //         i++;
        //     }
        // }
        // return nums[i];
        return nums[n/2];
    }
};