class Solution {
public:
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
        //排除[]和[[]]这两种特殊情况
        if (matrix.empty() || matrix[0].empty()) {
            return false;
        }
        int i = 0, j = matrix[0].size() - 1;
        while (i<matrix.size() && j>=0) {
            if (matrix[i][j]==target) {
                return true;
            }
            else if (matrix[i][j]>target) {
                --j;
            }
            else {
                ++i;
            }
        }
        return false;
    }
};