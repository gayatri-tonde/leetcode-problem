class Solution {
public:
    void reverseString(vector<char>& s) {
        // int right = s.size() - 1;
        for (int left = 0; left < s.size()/2; left++) {
            swap(s[left], s[s.size()-left-1]);
            //right--;
        }
    }
};