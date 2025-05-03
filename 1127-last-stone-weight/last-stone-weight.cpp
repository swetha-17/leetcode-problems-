class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        while (stones.size() > 1) {
        
        sort(stones.begin(), stones.end());

        int stone1 = stones[stones.size() - 1];
        int stone2 = stones[stones.size() - 2];

        if (stone1 != stone2) {
            stones.pop_back(); 
            stones.pop_back(); 
            stones.push_back(stone1 - stone2); 
        } else {
            stones.pop_back(); 
            stones.pop_back();
        }
    }

    return stones.empty() ? 0 : stones[0];
    }
};