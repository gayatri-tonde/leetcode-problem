class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int m = k % nums.size();
        int i = 0 ;
        int j = nums.size() - 1;
        while ( i < j) {
            swap(nums[i++], nums[j--]);
        }
        i = 0;
        while ( i < m - 1) {
            swap(nums[i++], nums[m - 1]);
            m--;
        }
        j = nums.size() - 1;
        m = k % nums.size();
        while ( m < j) {
            swap(nums[m++], nums[j--]);
        }
    }
};