class Solution {
    public int[] findMissingAndRepeatedValues(int[][] grid) {
        int num = 0;
        int n = grid.length;
        int[] ans = new int[2];
        int[] count = new int[(n * n) + 1];

        for(int i = 0; i < n ; i++){
            for(int j = 0; j < n; j++){
               num = count[grid[i][j]]++;
            }
        }

        for(int i = 0 ; i<count.length; i++){
            if(count[i] == 0){
                ans[1] = i;
            }
            if(count[i] == 2){
                ans[0] = i;
            }
        }
        return ans;
    }
}