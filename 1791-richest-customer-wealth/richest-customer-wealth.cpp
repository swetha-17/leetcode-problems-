class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int row = accounts.size();
        int col = accounts[0].size();
        int max_sum=0, sum=0;
        for(int i=0; i<row; i++){
            sum = 0;
            for(int j=0; j<col; j++){
                sum += accounts[i][j];
            }

            max_sum = max(max_sum, sum);
        }

        return max_sum;
    }
};