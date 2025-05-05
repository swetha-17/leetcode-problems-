class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            int a = nums[i];
            for(int j=0;j<a;j++){
                if((j | (j+1)) == a){
                    nums[i] = j;
                    break;
                }
                if(j == a-1){
                    nums[i] = -1;
                }     
            }
        }
        return nums;
    }
};