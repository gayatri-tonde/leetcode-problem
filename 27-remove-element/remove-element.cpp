class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // int k = nums.size() - 1;
        //  int i = 0;
        //  int j = nums.size() - 1;
        //  while (i < j) {
        //      while (nums[i] == val) {
        //          if (nums[j] != val) {
        //              swap(nums[i], nums[j]);
        //              k--;
        //          }
        //          j--;
        //      }
        //      i++;
        //  }
        int i = 0;
        int j = 0;
        //int k = 0;
        while (i < nums.size()) {
            if (nums[i] != val) {
                //++k;
                nums[j++] = nums[i];
            }
            i++;
        }
        return j;
    }
};
