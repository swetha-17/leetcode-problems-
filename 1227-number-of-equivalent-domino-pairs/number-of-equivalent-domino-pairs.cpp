class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        int count[100] = {0}; 
        int result = 0;

        for (int i = 0; i < dominoes.size(); i++) {
            int a = dominoes[i][0];
            int b = dominoes[i][1];

            int key = (a < b) ? a * 10 + b : b * 10 + a;

            result += count[key]; 
            count[key]++;         
        }

        return result;
    }
};