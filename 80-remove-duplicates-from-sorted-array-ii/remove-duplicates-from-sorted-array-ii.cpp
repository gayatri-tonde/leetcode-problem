class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 1;
        int k = 0;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] != nums[i + 1]) {
                nums[j++] = nums[i + 1];
                k = 0;
            }
            else if (nums[i] == nums[i + 1] && k < 1) {
                nums[j++] = nums[i + 1];
                k++;
            }
        }
        return j;
    }
};