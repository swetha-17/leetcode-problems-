class Solution {
public:
    int balancedStringSplit(string s) {
    int count = 0;  
    int result = 0;  

    for (char c : s) {
        if (c == 'L') {
            count++;
        } else if (c == 'R') {
            count--;
        }

        if (count == 0) {
            result++;
        }
    }

    return result;
    }
};