class Solution {
public:
    int minimumSum(int num) {
        vector<int> arr;
        while(num!=0){
            int digit = num%10;
            arr.push_back(digit);
            num = num/10;
        }
        sort(arr.begin(),arr.end());
        int left = 0;
        int right = 3;
        int ans = 0;
        int i = 2;
        while(i>0){
            int num1 = arr[left];
            num1 = num1*10;
            num1 = num1+arr[right];
            ans += num1;
            left++;
            right--;
            i--;
        }
        return ans;
    }
};