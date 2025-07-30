class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // for (int j = 0; j < n; j++) {
        //     int i = m - 1;
        //     while (i >=  && nums2[j] < nums1[i + j]) {
        //         nums1[i + j + 1] = nums1[i + j];
        //         i--;
        //     }
        //     // when j is not smaller
        //     nums1[i + j + 1] = nums2[j];
        // }

        //optimised code
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;
        
        while (j >= 0) {
            if (i >= 0 && nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
            } else {
                nums1[k--] = nums2[j--];
            }
        }
    }
};