class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for (int j = 0; j < n; j++) {
            int i = m - 1;
            while (i >= 0 && nums2[j] < nums1[i + j]) {
                nums1[i + 1 + j] = nums1[i + j];
                i--;
            }
            // when j is not smaller
            nums1[i + 1 + j] = nums2[j];
        }
    }
};