class Solution {
    public int[] plusOne(int[] digits) {
        int n = digits.length - 1;
        int newdigits[] = new int[digits.length + 1];
        if (digits[n] < 9) {
            digits[n] += 1;
        }
        else{
            while (digits[n] == 9) {
                digits[n] = 0;
                n--;
                if(n < 0){
                    newdigits[0] = 1;
                    return newdigits;
                }
            }
            digits[n] += 1;
        }
        return digits;
    }
}