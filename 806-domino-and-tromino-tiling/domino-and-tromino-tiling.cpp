class Solution {
public:
    int numTilings(int n) {
        int MOD = 1000000007;

        if (n == 1) return 1;
        if (n == 2) return 2;
        if (n == 3) return 5;

        long a = 1;
        long b = 2; 
        long c = 5; 
        long d;     

        for (int i = 4; i <= n; ++i) {
            d = (2 * c + a) % MOD;
            a = b;
            b = c;
            c = d;
        }

        return c;
    }
};