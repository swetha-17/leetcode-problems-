class Solution {
public:
    long long countInterestingSubarrays(vector<int>& nums, int modulo, int k) {
         int prefixMod = 0;
        int64_t count = 0;
        unordered_map<int, int> freq{{0, 1}};

        for (int num : nums) {
            if (num % modulo == k) {
                prefixMod = (prefixMod + 1) % modulo;
            }

            int target = (prefixMod - k + modulo) % modulo;
            count += freq[target];
            ++freq[prefixMod];
        }

        return count;
    }
};