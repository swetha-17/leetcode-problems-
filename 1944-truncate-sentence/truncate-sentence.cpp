class Solution {
public:
    string truncateSentence(string s, int k) {
        string result = "";
        int wordCount = 0;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ' ') {
                wordCount++;
                if (wordCount == k)
                    break;
            }
            result += s[i];
        }

        return result;
    }
};