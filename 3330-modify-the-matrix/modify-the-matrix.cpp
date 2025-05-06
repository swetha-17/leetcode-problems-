class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        vector<int> mx(n);
        for (int j = 0; j < n; j++) {
            for (int i = 0; i < m; i++) {
                mx[j] = max(mx[j], matrix[i][j]);
            }
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == -1) {
                    matrix[i][j] = mx[j];
                }
            }
        }
        return matrix;
    }
};