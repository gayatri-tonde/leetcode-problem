class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int sRow = 0, sCol = 0, eRow = matrix.size() - 1,
            eCol = matrix[0].size() - 1;
        int counter = 0;
        vector<int> result;
        while (counter < matrix.size() * matrix[0].size())
        //                      OR
        // while (sCol<=eCol  || sRow<=eRow)
        {
            for (int i = sCol; i <= eCol; i++) {
                result.push_back(matrix[sRow][i]);
                counter++;
            }

            for (int i = sRow + 1; i <= eRow; i++) {
                result.push_back(matrix[i][eCol]);
                counter++;
            }

            for (int i = eCol - 1; i >= sCol; i--) {
                if (sRow == eRow) {
                    break;
                }
                result.push_back(matrix[eRow][i]);
                counter++;
            }

            for (int i = eRow - 1; i >= sRow + 1; i--) {
                if (sCol == eCol) {
                    break;
                }
                result.push_back(matrix[i][sRow]);
                counter++;
            }
            sRow++;
            sCol++;
            eRow--;
            eCol--;
        }
        cout << counter;
        return result;
    }
};