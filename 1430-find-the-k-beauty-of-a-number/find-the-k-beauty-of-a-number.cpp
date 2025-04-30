class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s = to_string(num);
        int ans = 0, n = s.size();
        for(int i=0;i<n-k+1;i++)
        {
            string temp = s.substr(i, k);
            int Num = stoi(temp);
            if(Num==0) continue;
            if(num % Num == 0 or Num % num == 0) ans++;
        }
        return ans;
    }
};